#include<stdio.h>
int main()
{
    int n[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Elements  in array are:\n");
    for(int i=0;i<10;i++)
    {
        printf("n[%d] :%d \n",i,n[i]);
    }
    
    return 0;
}