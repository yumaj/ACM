#include<iostream>
#include<cmath>

using namespace std;

long long int search(long long int  n){
  long long int  counter = 0;
  if(n == 1){
  return 1;
  }
  do{
   if(n%2 == 1){
     n = 3*n+1;
     counter++;
   }
   else if(n%2 == 0){
     n = n/2;
     counter++;
   }
  }while(n  != 1);
  counter++;
  return counter;  
}

void print(long long int i,long long int  j){
  long long int  max = 0;
  long long int  temp ;
  if(i > j){
    for(long long int  n = j; n <= i; n++){
     temp = search(n);
     if(temp > max)max = temp;
    }
  }
  else{
   for(long long int n = i; n <= j; n++){
     temp = search(n);
     if(temp > max)max = temp;
    }
  }
  cout << i <<" "<< j <<" "<< max;
  
}

int main(){
  long long int  i,j;
   
   while(cin >> i >> j){
   print(i,j);
   cout << endl;
   }

}
