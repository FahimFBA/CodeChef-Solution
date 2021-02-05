#include<stdio.h>
int main()
{
    int t, a, b, result, i;
    scanf("%d" , &t);
    for (i=0; i<t; i++)
    {
        scanf("%d%d", &a, &b);
        result = a+b;
        printf("%d\n" , result);
    }
    return 0;
}