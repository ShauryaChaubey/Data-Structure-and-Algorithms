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
      for(j=i+1;j<n;j++)
      {
         if(arr[i]>arr[j])
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
   }

   printf("Sorted array is: ");
   for(i=0;i<n;i++)
   {
     printf(" %d",arr[i]);
   }

}
