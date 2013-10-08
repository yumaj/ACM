#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<string.h>
using namespace std;
void print(int stock[26][26],int n){
	
	
	 for(int i = 0; i < n; i++){//print
 	 cout<<i<<":";
		for(int j =0; j < n; j++){
 	 	if(stock[i][j] != 27){
 	 		cout<<" "<< stock[i][j];
 	 	}
 	 	else{
 		  cout << endl;
 		  break;
 	 	}
 	 	
 	 }
 	
 	
 }
	
}

int main(){
	
 int n,num2,num,counter = 0;
 do{
  cin >> n;
 }while(n <= 0||n >= 25);
 
 int stock[26][26];
 for(int i = 0; i <n; i++){
 	stock[i][0] = i;
 	for(int j = 1;j < n;j++){
	  stock[i][j] = 27;
 	}	
 }
 
 string option;
 int temp;
 while((cin >> option) && option != "quit"){
 	 counter = 0;
	 if(option == "move"){
	  cin >>num;
	   	option = "";
		cin >> option;

    if(option == "onto"){
	  	
			cin >> num2;
	  	if(num == num2){
	  	}
	    else{
	    for(int i = 0;i < n;i++){//find a and back 
  	    for(int j = 0;j < n;j++){
  	    	if(num == stock[i][j]){	
  	  	  	while(stock[i][++j] != 27){//move A's back	
				    	for(int k = 0; k < n;k++){//find final
	  				  	if(stock[stock[i][j]][k] == 27){
	  					  	temp = stock[i][j];
  					  	  stock[i][j] = 27;	
									stock[temp][k] = temp; 
									break;
	  				  	}
  				  	}
  	  	  	}
  	  	  	break;
  	  	  }
  	    	else if(stock[i][j] == 27 ){
		 	     break;	
  	    	}
  	    }
	  		 
 	    }   
	    for(int i = 0; i < n; i++){//find b and back		
 	    	for(int j = 0; j < n; j++){
  	    	if(num2 == stock[i][j]){
  	  	  	while(stock[i][++j] != 27){//move b's back
				    	for(int k = 0; k < n;k++){//find final
	  				  	if(stock[stock[i][j]][k] == 27){
	  					  	temp = stock[i][j];
	  						  stock[i][j] = 27;
	  						  stock[temp][k] =temp; 
	  						  break;
	  				  	}
  				  	}
  	  	  	}
  	  	  	break;
  	  	  }
 	    		else if(stock[i][j] == 27){
 	    			break;
 	    		}
 	    		
   	    }
      } 
	    for(int i = 0;i < n;i++){//find a 
  	    for(int j = 0;j < n;j++){
  	    	if(num == stock[i][j]){
  	  	    for(int k = 0;k < n;k++){//find b  
  	          for(int l = 0;l < n;l++){
  	      	    if(num2 == stock[k][l]){//onto
	  	  	        temp = stock[i][j];
	  	  	        stock[i][j] = 27;
	  	  	        stock[k][l+1] = temp;
  	  	        	break;
  	  	        }
  	         	  else if(stock[k][l] == 27 ){
		 	            break;	
  	           	}
  	          }
	  	      
 	        } 	  	  
  	  	  	break;
  	  	  }
  	    	else if(stock[i][j] == 27 ){
		 	     break;	
  	    	}
  	    }  	
 	    }
    }			 
   }
  
	
	
	else if(option == "over"){
  	cin >> num2;	 
  	if(num == num2){
		}
	  else{
	    for(int i = 0;i < n;i++){// find a and back
  	    for(int j = 0;j < n;j++){
  	    	if(num == stock[i][j]){
  	    		while(stock[i][++j] != 27){//move back
			  	  	for(int k = 0; k < n;k++){//find final
	  		  			if(stock[stock[i][j]][k] == 27){
	  			  			temp = stock[i][j];
	  		  				stock[i][j] = 27;
	  			  			stock[temp][k] =temp; 
	  			  			break;
	  			  		}
  				  	}
  	  	  	}
  	  	  	break;
  	    	}
  	    	else if(stock[i][j] == 27 ){
f		 	     break;	
  	    	}
  	    }
	  	
 	    }
 	    
 	    
 	  	 for(int i = 0;i < n;i++){//find a 
  	    for(int j = 0;j < n;j++){
  	    	if(num == stock[i][j]){
  	  	    for(int k = 0;k < n;k++){//find b  
  	          for(int l = 0;l < n;l++){
  	      	    if(num2 == stock[k][l]){//over
  	  	         	for(int p = l+1;p < n; p++){
									  if(stock[k][p] == 27){// b's final
  	  	         	  	temp = stock[i][j];
         	 	          stock[i][j] = 27;
                      stock[k][p] = temp;
                      l = p;
										  break;	  		
  	  	          	}  	  	         		
  	  	         	}

  	  	         	
	       	 	    break;
  	  	        }
  	         	  else if(stock[k][l] == 27 ){
		 	            break;	
  	           	}
  	          }      
 	        } 
  	  	  	break;
  	  	  }
  	    	else if(stock[i][j] == 27 ){
		 	     break;	
  	    	}
  	    }
 	    }    
 	   } 		  		 			 	
	 } 
 	}
 	
	 
	 
 
 
   else if(option == "pile"){
 		cin >> num;
 		option = "";
 		cin >> option;

 		
 		 if(option == "onto"){
  	   cin >> num2;
  	   if(num == num2){
		   }
  	  else{
  	   
	    for(int i = 0; i < n; i++){//find b and back		
 	    	for(int j = 0; j < n; j++){
  	    	if(num2 == stock[i][j]){
  	  	  	while(stock[i][++j] != 27){//move b's back
				    	for(int k = 0; k < n;k++){//find final
	  				  	if(stock[stock[i][j]][k] == 27){
	  					  	temp = stock[i][j];
	  						  stock[i][j] = 27;
	  						  stock[temp][k] =temp; 
	  						  break;
	  				  	}
  				  	}
  	  	  	}
  	  	  	break;
  	  	  }
 	    		else if(stock[i][j] == 27){
 	    			break;
 	    		}
 	    		
   	    }
      } 
  	   
  	 for(int i = 0;i < n;i++){//find a 
  	    for(int j = 0;j < n;j++){
  	    	if(num == stock[i][j]){
  	  	    for(int k = 0;k < n;k++){//find b  
  	          for(int l = 0;l < n;l++){
  	      	    if(num2 == stock[k][l]){//onto
									temp = stock[i][j];
	  	  	        stock[i][j] = 27;
	  	  	        stock[k][++l] = temp;
	  	  	        while(stock[i][++j] != 27){//ahead 
	  	  	         	temp = stock[i][j];
	  	  	          stock[i][j] = 27;
	  	  	          stock[k][++l] = temp;	
	  	  	        }
  	  	        	break;
        	  	  }
  	         	  else if(stock[k][l] == 27 ){
		 	            break;	
  	           	}
  	          }
	  	      
 	        }
  	  	  
  	  	  	break;
  	  	  }
  	    	else if(stock[i][j] == 27 ){
		 	     break;	
  	    	}
  	    }	
 	    }
		 	}
		 }
		 else if(option == "over"){
	 	   cin  >> num2;
		 for(int i = 0;i < n;i++){//find a 
  	    for(int j = 0;j < n;j++){
  	    	if(num == stock[i][j]){
  	  	    for(int k = 0;k < n;k++){//find b  
							for(int l = 0;l < n;l++){
  	      	    if(num2 == stock[k][l]){//over
									for(int p= l+1;p < n; p++){// find b's final location
  	  	          	if(stock[k][p] == 27){
  	  	           		temp = stock[i][j];
         	 	          stock[i][j] = 27;
                      stock[k][p] = temp;
											while(stock[i][++j] != 27){//ahead 
	  	  	           	temp = stock[i][j];
	  	  	            stock[i][j] = 27;
	  	  	            stock[k][++p] = temp;	
	  	  	            }
	  	  	            l = p;
											counter = 1;
								  		break;	  		
  	  	          	}   
 	  	            } 
									
  	  	        	break;
        	  	  }
  	         	  else if(stock[k][l] == 27 ){
		 	            break;	
  	           	}
  	          }
  	          if(counter == 1){
  	          	break;
  	          }
 	          }
  	  	  }
  	    	else if(stock[i][j] == 27 ){
		 	     break;	
  	    	}
  	    	if(counter == 1){
  	      	break;
  	      }
  	    }
				if(counter == 1){
  	      	break;
  	     }	
 	    }

		 } 
 		
 	}
 	option = "";
 }
 


 for(int i = 0; i < n; i++){//print
 	 cout<<i<<":";
		for(int j =0; j < n; j++){
 	 	if(stock[i][j] != 27){
 	 		cout<<" "<< stock[i][j];
 	 	}
 	 	else{
 		  cout << endl;
 		  break;
 	 	}
 	 	
 	 }
 	
 	
 }
 system("pause");

}
