#include <stdio.h>

int main() 
   {
    int n[]={26,26,90,52,43};
    int length,sum=0,avg;
    printf("Size of array %lu \n",sizeof (n));
    printf("size of element %lu \n",sizeof (n[4]));
    length=sizeof (n)/sizeof n[4];
    printf("Length of element is:%d \n",length);
    for(int i=0;i<length;i++)
    {
     sum+=n[i];
     avg=sum/length;
    }
        printf("Average of array is %d",avg);
        return 0;
}
