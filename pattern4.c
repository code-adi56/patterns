#include<stdio.h>
main()
{
     int i,j,n=5,z=1;
    char ch=65;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==0)
            {
                printf("%d",z);
            }
            else{
                printf("%c",ch);
            }
            
        }
        printf("\n");
       if(i%2==0){
        z++;
       }
       else{
        ch++;
       }
}}