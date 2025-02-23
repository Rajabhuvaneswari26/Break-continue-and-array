#include <stdio.h>

int main() 
   {
    int n[]={26,78,90,52,43};
    int length;
    printf("Size of array %lu \n",sizeof (n));
    printf("size of element %lu \n",sizeof (n[4]));
    length=sizeof (n)/sizeof n[4];
    printf("Length of element is:%d \n",length);
    for(int i=0;i<length;i++)
    {
        int rem;
        if(rem%2==0)
        {
            printf("First number in even position is %d ",n[i]);
            break;
        }
    }

    return 0;
}