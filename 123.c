#include <stdio.h>
#define SIZE 50

int read(int n,char a[][SIZE]){
     int i,j;
     printf ("Enter words: ");
       for (i=0;i<n;i++){
        for(j=0;j<SIZE;j++){
				 	 scanf("%s",&a[i][j]);
           if (a[i][j]== '\0'){
          	 printf("asdasd");
            break;
				   }
				 }
			 
				 for(j=0;j<SIZE;j++){
				 	 printf("%c",a[i][j]);
           if (a[i][j]== '\0'){
          	 printf("asdasd");
            break;
				   }
				 }
		  
        }
}
int main(void){
    int n;    
    printf ("Enter number of words: ");
    scanf("%d",&n);
    getchar();
    char a[50][SIZE] = {'d'};
    read (n,a);
    system("pause");
}
