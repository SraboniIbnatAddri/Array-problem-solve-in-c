#include<stdio.h>
int main()
{
    int arr1[5]={12,13,14,15,16},arr2[5],i;

     printf("Array 1: \n");

    for(i=0;i<5;i++)
    {
        printf("%d \n",arr1[i]);
    }
    //coping all the elements in arr2

    for(i=0;i<5;i++)
    {
        arr2[i]=arr1[i];

    }

    printf("Array 2: ");

     for(i=0;i<5;i++)
    {
        printf("%d ",arr2[i]);
    }
    getch();
}
