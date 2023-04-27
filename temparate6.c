#include<stdio.h>

main()
{
     int r,c,a=15,b=1;
     printf("enter value:");
     scanf("%d",&a);
     
     for(r=1;r<=a;r++)
     {
        for(c=1;c<=r;c++)
        {
           printf("%d",b);
           b++;
                                                                    
        }
        printf("\n");                                                          
     }                                                        
}
