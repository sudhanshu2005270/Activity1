#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,opn;
    printf("Enter the number of elements of array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    printf("The entered array is: \n");
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
    printf("\n");
    printf("Enter the choice for sorting: 1. Ascending Order 2. Descending Order\n");
    scanf("%d",&opn);
    if(opn==1)
    {
        int temp;
        for(i=0;i<n;i++)
            for(j=0;j<n-1;j++)
            {
                if(*(arr+j)>*(arr+j+1))
                {
                    temp=*(arr+j);
                    *(arr+j)=*(arr+j+1);
                    *(arr+j+1)=temp;
                }
            }
        printf("The sorted array is: \n");
        for(i=0;i<n;i++)
            printf("%d\t",*(arr+i));
    }
    else if(opn==2)
    {
        int temp;
        for(i=0;i<n;i++)
            for(j=0;j<n-1;j++)
            {
                if(*(arr+j)<*(arr+j+1))
                {
                    temp=*(arr+j);
                    *(arr+j)=*(arr+j+1);
                    *(arr+j+1)=temp;
                }
            }
        printf("The sorted array is: \n");
        for(i=0;i<n;i++)
            printf("%d\t",*(arr+i));
    }
    else
        printf("Chosen option is not valid\n");
        exit(0);
    return 0;
}
