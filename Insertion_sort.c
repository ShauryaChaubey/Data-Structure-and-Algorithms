#include <stdio.h>

int main(void)
{
   int i, j, n, temp=0, arr[250];

   printf("Enter numberof elements: ");
   scanf("%d",&n);

   printf("Enter elements: ");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       j=i;
      for(j=i;j>0;j--)
      {
         if(arr[j-1]>arr[j])
         {
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
         }
      }
   }

   printf("Sorted array is: ");
   for(i=0;i<n;i++)
   {
     printf(" %d",arr[i]);
   }

}
