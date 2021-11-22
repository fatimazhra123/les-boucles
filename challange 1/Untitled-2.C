#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i;
    printf("veuillez entrez la valeur de N :");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
         printf("%d x %d = %d \n",n, i, n*i);
    }



    return 0;
}