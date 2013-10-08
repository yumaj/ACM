#include<stdio.h>
#include<stdlib.h>
int main() {
    int a =0, b= 0 , max = 0 , num = 1 ;
    while ( scanf("%d" , &a) ) {
         scanf("%d" , &b) ;
         printf("%d" , a ) ;
         printf(" " ) ;
         printf("%d" , b ) ;
         printf(" " ) ;
         if ( a > b ) {
           int t = a;
           a =  b ;
           b = t ;
         } // if
      for ( int i = a ; i <= b ; i=++a) {    
         while ( i != 1 ) {
             if  (i % 2 == 0 ) i = i / 2 ;
             else i = ( 3 * i ) + 1  ; 
             num ++ ;
         }  // while       
         if (num > max ) max = num ;
         num = 1;
      }  // for
        printf("%d\n" , max ) ;
        num = 1 , max =1  ;
   } //while
     // system("pause")
} //main

