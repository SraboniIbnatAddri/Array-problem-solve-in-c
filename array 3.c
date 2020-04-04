#include<stdio.h>
int main()
{
    int arr[100],n,max;

    printf("How many number: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    max=arr[0];

    for(int i=1;i<n;i++)
    {
        if(max<arr[i])

            max=arr[i];

    }
    printf("Maximum: %d\n",max);
    return 0;

}
