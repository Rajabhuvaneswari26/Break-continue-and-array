#include<stdio.h>
int main()
{
    int num;
    while(1)
    {
       printf("Enter a number:");
      scanf("%d",&num);
    
        if(num==0)
        {
            break;
        }
        printf("The program is running. \n");
    }
        printf("The program is stopped.");
    
    return 0;
}