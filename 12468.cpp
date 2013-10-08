#include<iostream>
#include<cmath>


using namespace std;


int main(){
	int temp;
	int a,b;
	int num;
	while(cin >> a >> b&& a != -1 && b != -1){
   
   if(a > b){
   	temp = a;
   	a = b;
   	b = temp;
   	
   }
   
   if (abs(a-b) > 50){
    num +=a ;
    num += (100 -b);
   	
   }
   else if(abs(a-b) < 50){
   	
   num  = b -a ;	
   }
   else{
	 num = 50;
	 }
   
	 cout << num << endl;
	 num = 0;
	
	}

	
	

	
	
	
	
}
