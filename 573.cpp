#include<iostream>

using namespace std;

int main(){
    
    
    double H,U,D,F,counter = 0,temp;
    while(1)
    {
     	cin >> H >> U >> D >> F;// H �N�����`�סC U �N�����b�Ĥ@�ӥդѯદ�h���C D �N��C�ѱߤW�����|�ƤU�h�֡C F �h�O�u�h�Ҧ]�l�v
    	if(H == 0)break;
    	int day = 0;
    	double up = 0,temp = 0;
		while(1)
		{
			day++;			
		    if(counter != 0)
			{
					temp = (U*(F/100.))* (day-1);
		    }
		
		    if(counter == 0)
			{
				up += U;
			}
			else if(U  - temp < 0);
			else 
			{
				up += (U - temp);		
			}

			if(up > H)
			{
				cout << "success on day " << day << endl;
				break;
			}
			
			up -= D;		
			if( up < 0)
			{
				cout << "failure on day " << day << endl;
				break;
			}

			counter = 1;
		  
		}
    	
    	
    	
    }



}
