#include <stdio.h>
#include <stdlib.h>
int main()
{

    int number;
    int v = 0;
    printf("enter number : \n");
    scanf("%d",&number);

    for(int i = 1;i <= number;i++){
        if((number % i) == 0){
            v++;
        }
    }

    if(v == 2){
        printf("%d est premier. \n",number);
    }
    else{
        printf("%d  n'est pas premier. \n",number);
    }
}