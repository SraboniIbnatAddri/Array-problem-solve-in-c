#include<stdio.h>
int main()
{
    int arr[100],n,min;

    printf("How many number: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    min=arr[0];

    for(int i=1;i<n;i++)
    {
        if(min>arr[i])

            min=arr[i];

    }
    printf("Miniimum: %d\n",min);
    return 0;

}

