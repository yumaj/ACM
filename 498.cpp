#include<iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
	int num_c,num_x,temp,numc[999] = {0},numx[999] = {0};
  int ans[999]= {0};
  for (int i = 0;i < 10000000 ; i++){
    cin >> numc[i];
    if (getchar() == '\n'){
	    num_c = i;
			break;
		} 
  }

  for (int i = 0;i < 10000000 ; i++){
    cin >> numx[i];
    if (getchar() == '\n') {
      num_x = i;
			break;
		}
  }
  int chifun;
  for(int i = 0; i <= num_x;i++){
		chifun = 0;
		for(int j = num_c; j >=0;j--){
			ans[i] += numc[j]*pow(numx[i],chifun);
  		chifun++;
  	}
  	cout << ans[i]<<" ";
  }
  cout <<endl;

  
 
} 
