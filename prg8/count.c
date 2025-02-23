#include <stdio.h>

int main() 
   {
    int n[]={26,26,90,52,43};
    int length,count=0,target=26;
    printf("Size of array %lu \n",sizeof (n));
    printf("size of element %lu \n",sizeof (n[4]));
    length=sizeof (n)/sizeof n[4];
    printf("Length of element is:%d \n",length);
    for(int i=0;i<length;i++)
    {
        if(n[i]==target)
        {
            count++;
        }
    }
        printf("Element %d occurs %d times.",target,count);
      

    return 0;
}
