#include<stdio.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>

using namespace std;

struct bignum{
	int num[3000];
	int size;
	bignum();
};
bignum::bignum(){
  memset( num, 0, sizeof(num) );
  size = 1;
}

bignum mul(bignum,int);
bignum print_bignum(bignum);
bignum dp[1005];


int main(){
	int n;
	dp[0].num[0] = 1;
	dp[1].num[0] = 1;	
	for(int i = 2;i <= 1000; i++){
		dp[i] = mul(dp[i -1], i);
	}
	 
  while( scanf( "%d", &n ) != EOF ){
    printf( "%d!\n", n );
    print_bignum( dp[n] );
    printf( "\n" );
  }
  return 0;
}


bignum mul(bignum a, int b)
{
	bignum temp;
	int carry = 0;
	for(temp.size = 0; temp.size < a.size || carry ;temp.size++){
		temp.num[temp.size] = a.num[temp.size]*b +carry;
		carry = temp.num[temp.size] / 10;
		temp.num[temp.size] %= 10; 
	}
	if(temp.num[temp.size])temp.size++;
	return temp;
	
}

bignum print_bignum(bignum a)
{
	for(int i = a.size - 1; i >= 0;i--)
	{
		printf("%d",a.num[i]);
	}
}



