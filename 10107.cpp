#include<iostream>

using namespace std;


int main(){
	int counter = 0;
	int num[99999];
	int N = 1;
	int mid = 0;
	int x = 0;
	int tep = 0,tep2 = 0;
	
	while(cin >> x){
		
		num[counter] = x;
		
	for(int i = 0;i < counter;i++){
		int min = i;
		
		for(int j = i + 1;j <= counter;j++){
			
			if(num[j] < num[min]){
				min = j;
				swap(num[i], num[min]);
			}
		}
	}
		
	
		if(N == 1){
		mid = x;
		}
		else if(N%2 != 0){
			tep = N/2;
			mid = num[tep];
			 
		}
		
		else if(N%2 ==0){
		 tep = (N/2 - 1);
		 tep2 = (N/2);
		 mid = (num[tep] + num[tep2])/2;
		}
		cout << mid;
		counter++;
			N++;
			mid = 0;
	}


}
