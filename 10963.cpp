#include<iostream>
#include<cmath>

using namespace std;


int main(){
	
	int N,W , num,ans,y1[999] = {0},y2[999] = {0};
	cin >> N;
	
	for(int i = 0;i < N; i++){
		cin >> W ;
		for(int j = 0; j < W ; j++){
			do{cin >> y1[j];cin >>y2[j]; }while(y1[j] < (-100) || y2[j] < -100|| y1[j] > 100||y2[j] > 100);     		
		}
		for(int j = 0; j < W ; j++){
			if(W == 1){
				if(i != 0)cout << endl;
				cout << "yes" <<endl;
				
			}
			else if(j == 0){
				num  = abs(y1[j] - y2[j]);
				
			}
      else{
      	if((abs(y1[j] - y2[j])) == num);
      	else if(abs(y1[j] -y2[j]) != num){
      		if(i != 0)cout << endl;
					cout << "no" <<endl;
      		
      		break;
      	}
      if(j == W -1&&j != 0){
        	if(i != 0)cout << endl;
					cout << "yes" <<endl;
        	
        }	
      		
	   	}
	  }
		
		
	}
	
	
	
}
