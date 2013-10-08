#include<iostream>
#include<cstdlib>
using namespace std;


int main()
{
    int nCase,Limit,nKind,i,j,k,  
        price[101],weight[101],bag[101],dp[101];  
      
    cin>>nCase;  
    while(nCase--)  
    {  
        cin>>Limit>>nKind;  
        for(i=0;i<nKind;i++)  
            cin>>price[i]>>weight[i]>>bag[i];  
  
        memset(dp,0,sizeof(dp));  
  
        for(i=0;i<nKind;i++)  
            for(j=0;j<bag[i];j++)  
                for(k=Limit;k>=price[i];k--)  
                    if(dp[k] < dp[k-price[i]]+weight[i])  
                        dp[k]=dp[k-price[i]]+weight[i];  
  
        cout<<dp[Limit]<<endl;  
    }  
	system("pause");
}
