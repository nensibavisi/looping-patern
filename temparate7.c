#include<stdio.h>

main()
{
     int r,c,a;
     printf("enter value:");
     scanf("%d",&a);
     
     for(r=1;r<=a;r++)
     {
        for(c=a-r+1;c>0;c--)
        {
           printf("%d",c);
                                                                    
        }
        printf("\n");                                                          
     }                                                        
}
