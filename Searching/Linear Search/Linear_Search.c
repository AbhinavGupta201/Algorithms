///linear search
#include<stdio.h>
int main()
{
    int n ,key ,i;
    printf("enter the how many numbers ?");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d number",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the key to be searched "); /// element to be searched
    scanf("%d",&key);
    for(i=0;i<n;i++) /// loop to check the element
     {
       if(arr[i]==key)
        {
            printf("key found !! at location=%d",i+1);
            break;
        }
     }
     if(i>=n)
        printf("key not found !!");
     return 0;
}
