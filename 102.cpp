#include<iostream>
#include<stdio.h>
using namespace std;

int find(int a[3][3],int num,int counter){
   int min = 0;
   for(int i = 0; i < 3 ; i++){
     if(i != num){
          min += a[counter][i];
     }
   }
  return min;
}



int main(){
  int bowl[3][3];
  int min = 0,num = 0;
  int ans[7][4] = {0};
  bool used[3] ={false};

  while(scanf("%d %d %d %d %d %d%d %d %d",&bowl[0][0],&bowl[0][1],&bowl[0][2],&bowl[1][0],&bowl[1][1],&bowl[1][2],&bowl[2][0],&bowl[2][1],&bowl[2][2]) == 9){
  
	//B -> C -> G
	//2    3    1
	 for(int j = 0; j < 3; j++){
          used[j] = false;
  }
  int num1 = 0,num2;
  num1= 0;
  for(int i = 0; i < 7; i++){
  	for(int j = 0;j < 4; j++){
  		ans[i][j] = 0;
  	}
  	
  }
  
  
  
	for(int i = 0; i < 7; i++){
    if( i % 2 == 0 && i != 0){
      for(int j = 0; j < 3; j++){
          used[j] = false;
      }
      num1++;
    }
    
    ans[i][0] = num1;
    ans[i][3] += find(bowl,num1,0);
    //bowl 1 end
    
    for(int j = 0; j < 3; j++){//find secend bowl
      if(j != num1 && used[j] == false){
       ans[i][1] = j;
       ans[i][3] += find(bowl,j,1);
       used[j] = true;
       num2 = j;
       break;     
      }
    }
    //second bowl end
    
    for(int j = 0; j < 3; j++){
       if(j != num1 && j != num2){
       ans[i][2] = j;
       ans[i][3] += find(bowl,j,2);
       break;
      }
    }
    // third bowl end
    
    int min_num,min;
    
          
  }
  

  for(int i = 0; i < 6; i++){
  	for(int j = 0; j < 3; j++){
  		if(ans[i][j] == 1){
  			ans[i][j] = 2;
  		}
  		else if(ans[i][j] == 2){
        ans[i][j] = 1;		
  		}
  		
  	}
  	
  }
  int min_num;
  min_num = 0;
  min = ans[0][3];
  for(int i = 1; i < 6; i++){
  	if(ans[i][3] < min){
  		min = ans[i][3];
  		min_num = i;
  	}
  	else if(ans[i][3] == min){
  		if(ans[i][0] < ans[min_num][0]){
			  min = ans[i][3];
  		  min_num = i;
			}
			else if(ans[i][0] == ans[min_num][0]){
			  if(ans[i][1] < ans[min_num][1])
				min = ans[i][3];
  		  min_num = i;
			}
  		
  		
  	}
  	
  } 
 
 
  for(int i = 0; i < 3; i++){
  	if(ans[min_num][i] == 0){
  		cout << "B";
  	}
  	else if(ans[min_num][i] == 1){
  		cout << "C";
  	}
  	else if(ans[min_num][i] == 2){
	    cout << "G";
		}
  	
  }
  cout <<" "<< min;
   }
  return 0; 
}
