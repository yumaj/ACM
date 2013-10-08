#include<iostream>
#include<cstdlib>
#include<cstdlib>
#include<cstring>
#include <algorithm> 

using namespace std;
char str[1000002];

int ch(int i, int j)
{
	char a = str[i];
	for(int k  = i + 1; k <= j;k++)
	{
		if(a != str[k])return 0;
	}
	return 1;
}


int main()
{
	
	char a = '1', b ='0';

	int counter = 1, n,i,j;
	while(scanf("%s",str)==1)
	{
		scanf("%d",&n);
		printf("Case %d\n",counter);
		for(int k = 0;k < n; k++)
		{
			scanf("%d%d",&i,&j);
			if(i > j)swap(i,j);
			bb 
			if(ch(i,j))printf("Yes\n");
			else printf("No\n");

		}
		counter++;
		
	}
	printf("1234");
	system("pause");
}
