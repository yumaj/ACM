#include<iostream>

using namespace std;
int main( ){
  
	int h,final_num,total_h = 0,total_cat = 1,N = 1;
		int n = 1;
	while((cin >> h >> final_num) && h != 0&&final_num != 0){
	total_h = h;
	total_cat = 1;
	n = 1;
	if(final_num != 1){
	for(int i = 2; i < 100000;i++){
		if( final_num % i == 0&& h%(i+1) == 0){
			N = i;
			break;
		}
		
	}	

  	while(h != 1){
	    n*=N;
 	    total_cat += n;
  		total_h += n*(h/(N+1)) ;
 	    h = (h/(N+1));
  	}
	
 	  total_cat -= n;
    cout<<total_cat<<" " <<  total_h <<endl;	
	
  }		
  else{ 
    N =1;
  	while(h != 1){
	    n*=N;
      total_cat += n;
	   	total_h += n*(h/(N+1)) ;
	    h = (h/(N+1));
	  }
  	total_cat -= n;
    cout<<total_cat<<" " <<  total_h <<endl;	
	
  }
		
  	}
	}

