/*第一題：
請設計一個程式，完成以下工作：
1.使用浮點數陣列儲存四個星期，每星期七天共28天的溫度
2.以選單選項完成以下功能
3.以函數完成：提供使用者輸入、修改溫度的功能（輸入星期別、日別決定資料位置）
4.以函數完成：計算各星期的平均溫度
5.以函數完成：計算四個星期的平均溫度
6.以函數完成：找出每星期溫度最高的一天*/
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
	cout<<"1.增加溫度\n";
    cout<<"2.顯示溫度\n";
    cout<<"3.每禮拜平均溫度\n";
    cout<<"4.算出全部的平均溫度\n";
    cout<<"5.找出每個星期溫度最高的一天\n";
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
	cout << "請輸入星期(0~3)：";
	cin >> wnum;
	if (wnum>=week || wnum<0)
	{
		cout << "查無此人！\n"; 
	}
	else
	{		
		cout << "請輸入要修改的日子(0~6)：";
		cin >> sindex;
		if (sindex>=Days || sindex<0)
		{
		cout << "查無此日！\n"; 
		}
		else
		{
			cout << "請輸入要修改的溫度：";
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
		cout << "第"<<i+1<<"個禮拜的平均溫度為:"<<average << "\n";		
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
    cout<<"全部平均溫度為"<<average<<"\n"; 
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
    		
		cout << "第" << i+1 << "禮拜，第" << maxd+1 << "天的溫度最高\n";    
    }
}
