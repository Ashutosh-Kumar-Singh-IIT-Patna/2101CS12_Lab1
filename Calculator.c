#include <stdio.h>

int main(){

    int num1,num2 ;

    printf("\nEnter num1 : ");
    scanf("%d",&num1);
    
    printf("\nEnter num2 : ");
    scanf("%d",&num2);

    printf("\nSelect option: \n");
    printf("\n1.Add\n");
    printf("\nEnter 1 to Add : ");

    int option;
    scanf("%d",&option);

    if(option==1){

        int ans=num1+num2;
        printf("\n%d\n",ans);

    }

    return 0;
}