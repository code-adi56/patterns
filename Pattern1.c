//Patterns
#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
    for(int j=i;j<=n;j++)
    {
    if(j%2!=0)
            {
                printf("*");
            }
    else{
                printf("0");
            }
    }
        printf("\n");
    }
    return 0;
}
