#include<iostream>
#include <stdio.h>

using namespace std;



int main(){
	
	
	int T,N,ans = 0;
	char niba[100] ={'#'};
	cin >>T;
	
	for(int i = 0; i < T; i++){
		
		do{cin >>N;}while(N>100||N<0);
		for(int j = 0; j < N;j++){
			cin >> niba[j];
		}
		
		
		for(int j = 0; j < N; j++){
			if(niba[j] == '.'){
				ans++;
				j+=2;
			}
			else{}
		}
		
		cout <<"Case "<< i+1<<": "<<ans<<endl;  
		ans = 0;
	}
	
	
	
}
