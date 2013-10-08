/*�Ĥ@�D�G
�г]�p�@�ӵ{���A�����H�U�u�@�G
1.�ϥίB�I�ư}�C�x�s�|�ӬP���A�C�P���C�Ѧ@28�Ѫ��ū�
2.�H���ﶵ�����H�U�\��
3.�H��Ƨ����G���ѨϥΪ̿�J�B�ק�ūת��\��]��J�P���O�B��O�M�w��Ʀ�m�^
4.�H��Ƨ����G�p��U�P���������ū�
5.�H��Ƨ����G�p��|�ӬP���������ū�
6.�H��Ƨ����G��X�C�P���ū׳̰����@��*/
#include <iostream>
#include <cstdlib>
using namespace std;

#define Days 7
#define week 4

void showArray(float a[][Days],int wnum);
void fillArray(float a[][Days],int sindex,int wnum);
void degreeAve(float a[][Days],int wnum);
void AlldegreeAve(float a[][Days],int wnum);
void findHighArray(float a[][Days],int sindex,int wnum);

int main()
{   int select;
	float degree[week][Days]={25,85,36,51,20,62,64,25,85,36,51,20,62,64,25,85,36,51,20,62,64,25,85,36,51,20,62,64};
	
while(1)
{	
    cout << "\n";
	showArray(degree,week);	
	cout<<"1.�W�[�ū�\n";
    cout<<"2.��ܷū�\n";
    cout<<"3.�C§�������ū�\n";
    cout<<"4.��X�����������ū�\n";
    cout<<"5.��X�C�ӬP���ū׳̰����@��\n";
	cin>>select;
switch(select)
	{
    case 1:
	fillArray(degree,Days,week);
	showArray(degree,week);
	system("cls"); 
	break;
	case 2:
    showArray(degree,week);
	break;
    case 3: 
    degreeAve(degree,week);
    break;
    case 4:
	AlldegreeAve(degree,week);
    break;
    case 5:
    findHighArray(degree,Days,week); 
    break;     
    }	 
 }

return 0 ;    
}

void showArray(float a[][Days],int wnum)
{
	int i,j;
	for (i=0;i<wnum;i++)
	{
		for (j=0;j<Days;j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
}

void fillArray(float a[][Days],int sindex,int wnum)
{
	cout << "�п�J�P��(0~3)�G";
	cin >> wnum;
	if (wnum>=week || wnum<0)
	{
		cout << "�d�L���H�I\n"; 
	}
	else
	{		
		cout << "�п�J�n�ק諸��l(0~6)�G";
		cin >> sindex;
		if (sindex>=Days || sindex<0)
		{
		cout << "�d�L����I\n"; 
		}
		else
		{
			cout << "�п�J�n�ק諸�ūסG";
			cin >> a[wnum][sindex];		
		}
	}
}

void degreeAve(float a[][Days],int wnum)
{
	int i,j;
	float average=0;
	for (i=0;i<wnum;i++)
	{
		average=0;
		for (j=0;j<Days;j++)
		{
			average+=a[i][j];
		}
		average/=Days;
		cout << "��"<<i+1<<"��§���������ū׬�:"<<average << "\n";		
	}
	
}

void AlldegreeAve(float a[][Days],int wnum)
{	
    int i,j;
	float average=0;
	for (i=0;i<wnum;i++)
	{
		
		for (j=0;j<Days;j++)
		{
			average=(average+a[i][j]);
		}	
	} 
    average=average/(Days*week);
    cout<<"���������ū׬�"<<average<<"\n"; 
}

void findHighArray(float a[][Days],int sindex,int wnum)
{	
    int i,j;
    int maxd;
    for(i=0;i<wnum;i++)
    {
    	float max=a[i][0];
    	for(j=1;j<sindex;j++)
    	{   		    
    		if(a[i][j]>=max){	
    			maxd = j;
    		max = a[i][j];
    	}
    		}   		
    		
		cout << "��" << i+1 << "§���A��" << maxd+1 << "�Ѫ��ū׳̰�\n";    
    }
}
