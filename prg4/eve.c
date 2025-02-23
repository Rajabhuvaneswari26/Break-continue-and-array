#include <stdio.h>

int main() 
   {
    int n[]={26,78,90,52,43};
    int length;
    printf("Size of array %lu \n",sizeof (n));
    printf("size of element %lu \n",sizeof (n[4]));
    length=sizeof (n)/sizeof n[4];
    printf("Length of element is:%d \n",length);
    printf("Even numbers in the array: ");
    for(int i=0;i<length;i++)
    {
      
      if(n[i]%2==0)
        {
            printf("%d ",(n[i]));
        }
    }

    return 0;
}