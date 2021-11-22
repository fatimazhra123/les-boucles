#include <stdio.h>
#include <stdlib.h>
int main(){

    int max = 0;
    int som = 0;
    int a = 1;


    printf("enter number (must be under 100 and more than 0) : \n");


   while (a != 0)
   {
        do{
            scanf("%d",&a);
            if(a > 100,a < 0){
                printf("sorry but this number is more then 100 or less than 0. \n");
            }
            if(a > max && a < 100){
            max = a;
            } 


        }while (a > 100   a < 0);
        som += a;
   }

    printf("la somme est : %d \n",som);
    printf("max est : %d \n",max);
}