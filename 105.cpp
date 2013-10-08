#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

struct Point
{
	int skyline;
	int used;
};

int main()
{
	Point bulid[10100];
	for(int i = 0; i < 10100; i++)
	{
		bulid[i].skyline = 0;
		bulid[i].used = 0;
	}
	
	int n;
	int num,high,num2,s = 0,e = 0;
     	cin >> num;
	     s = num;
		cin >> high >> num2;
        e = num2;
		for(int i = num ; i <= num2;i++)
		{
			if(bulid[i].used == 1)
			{
				if(high > bulid[i].skyline)
				{
					bulid[i].skyline = high;
				}
			}
			else
			{
				bulid[i].skyline = high;
				bulid[i].used = 1;
			}
		}
	
	while(cin >> num)
	{
		if(num < s) s = num;
		cin >> high >> num2;
		if(num2 > e) e = num2;
		
		for(int i = num ; i < num2;i++)
		{
			if(bulid[i].used == 1)
			{
				if(high > bulid[i].skyline)
				{
					bulid[i].skyline = high;
				}
			}
			else
			{
				bulid[i].skyline = high;
				bulid[i].used = 1;
			}
		}
	}
	
	bool space = false;
 for( int i = 1 ; i <= e ; i++ )
    if( bulid[i - 1].skyline != bulid[i].skyline ){
      if( space ) printf( " " );
      space = true;
      printf( "%d %d", i, bulid[i].skyline );
    }
 
  printf( "\n" );
}
