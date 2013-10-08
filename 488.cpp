
#include<iostream>
using namespace std;

int main(){
	int num1,counter2,counter7;
  unsigned int  A[9999],F[9999];
  
    while(cin >> num1){
    	

	cout << endl;
	
	for(int counter = 0; counter < num1 ; counter++){
		cin >> A [counter]>> F[counter];
		cout << endl;
	}
	
	
	
	
		for (int counter1 = 0; counter1 < num1; counter1++ ){ 
	      
		   for (int counter6 = 0;counter6 < F[counter1]; counter6++){//ÀW²v 
			 
			 for(counter2 = 1;counter2 <= A[counter1]; counter2++ ){//¦L¤ôªi
				 for(int counter3 = 1; counter3 <= counter2; counter3++){
				 cout <<  counter2;
				 }
				 cout << endl;
			 }
			 for(int counter4 = counter2 - 2;counter4 > 0; counter4-- ){
			  	 for(int counter5 = 1; counter5 <= counter4; counter5++ ){
				  	cout << counter4;
				 }
			 	 cout << endl;
			 }
	 	      cout << endl;
	 	  }
	 	 
	 	 
		 
		
  
        }
        	cout << endl;
    }
}
