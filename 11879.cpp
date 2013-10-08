#include<iostream>
#include<cmath>
using namespace std;

long long pow(long long n)
{
	long long a = 1;
	for(int i = 1;i < n; i++)
	{
		a*=10;
	}
	return a;
}

int main()
{
	double  n;
	while((cin >> n) && (n != 0))
	{
		double  temp,temp2 = 0;
	 	if(n < 17)
		{
			cout << "0" <<endl;
		}
		else
		{
			temp = n;
			int counter = 1;
			double  num;

			num = floor(n/10);

			temp2 = n - num*10;
			double ans = 0;
			ans = fabs(num - temp2*5);
			double ans2  = fmod(ans,17);
			
			if(ans2  == 0)
			{
				cout <<"1"<<endl;
			}
			else cout << "0" << endl;
		}
	}
}
