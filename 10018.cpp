#include<iostream>
#include<stdio.h>
#include<cmath>
#include <cstdlib>

using namespace std;


int main(){
	 
  double  ans,num = 0;	
	double N,P,A = 0,temp,temp2,counter = 1,temp3;
  
   cin >> N;

  
  for(int i= 0; i < N; i++){

    counter = 1;
    A= 0;
  	do{
  		cin >> P;
		}while(P == 196|| P <= 0);
    
    
     for(int k = 0; k < 10;k++){
     	num = 0;
      	for(int j = 0; j < 1000; j++){;
        	if( ceil((P/pow((double)10,(double)(num -j-1)))) >= 1)num++;
       	else{
		  	  break;
        	}
        }
		
		   for(int j= 0; j < num; j++){
    	  if(j == 0){
			
          temp = ceil(P/pow((double)10,(double)(num -1) ));
          A  += temp * (pow((double)10,(double)j));
		    }
	     	else{
		     temp2 = ceil((P/pow((double)10,(double)(num -j-1)))) -temp*10 ;
		     temp = ceil((P/pow((double)10,(double)(num -j-1))));
         A  += temp2 * (pow((double)10,(double)j));
		   	}
       }
			P = P+A;
			A = 0;
			num = 0;
			  for(int k = 0; k < 10;k++){
     	    num = 0;
      	for(int j = 0; j < 1000; j++){;
        	if(ceil((P/pow((double)10,(double)j))) >= 1)num++;
       	else{
		  	  break;
        	}
        }
		
		   for(int j= 0; j < num; j++){
    	  if(j == 0){
			
          temp = ceil(P/pow((double)10,(double)(num -1) ));
          A  += temp * (pow((double)10,(double)j));
		    }
	     	else{
		     temp2 = ceil((P/pow((double)10,(double)(num -j-1)))) -temp*10 ;
		     temp = ceil((P/pow((double)10,(double)(num -j-1))));
         A  += temp2 * (pow((double)10,(double)j));
		   	}
       }
         
	   	if(A != P ){
	   		cout << A <<endl;
	   		cout << P <<endl;
			  counter++;
			 }
      
			else{
        printf("%.0lf %.0lf\n",counter,P);
				break;
				
      }
       A = 0;
     }
     
  }
  system("pause");
	
}



