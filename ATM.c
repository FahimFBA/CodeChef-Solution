
#include<stdio.h>
int main() 
{
    int transaction;
    float balance ;
     scanf("%d %f" , &transaction, &balance); 
     
 
    if ((transaction % 5 == 0) && (balance  >= (transaction + 0.5)))
    {
        printf("%.2f\n" , (balance - (transaction + 0.5)));
    }

    else
    printf("%.2f\n" , balance);

    return 0;

}