#include <stdio.h>

int main(){

    int num1,num2 ;

    printf("\nEnter num1 : ");
    scanf("%d",&num1);
    
    printf("\nEnter num2 : ");
    scanf("%d",&num2);

    printf("\nSelect option: \n");
    printf("\n1.Add  \t 2.Subtract \t 3.Multiply \t 4.Divide\n");
    printf("\nEnter 1 to Add or 2 to Subtract or 3 to Multiply or 4 to Divide : ");

    int option;
    scanf("%d",&option);

    if(option==1){

        int ans=num1+num2;
        printf("\n%d\n",ans);

    }
    else if(option==2){

        int ans=num1-num2;
        printf("\n%d\n",ans);

    }
    else if(option==3){

        int ans=num1*num2;
        printf("\n%d\n",ans);

    }
    else if(option==4){

        float ans= (float)num1/(float)num2;
        printf("\n%.2f\n",ans);

    }

    return 0;
}