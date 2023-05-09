#include <stdio.h>
main()
{ int i,j,n=4,z=1;
    char ch=97;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==0)
            {
                printf("%d",z);
                z++;
            }
            else{
                printf("%c",ch);
                ch++;
            }
            
        }
        printf("\n");
       
}}