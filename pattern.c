#include<stdio.h>
main()
{
     int n=5;
    for(int i=1;i<=n;i++)
    {
    for(int j=1;j<=n;j++)
    {
    if(j%2!=0)
            {
                printf(" 0");
            }
    else{
                printf(" *");
            }
    }
        printf("\n");
    }
}