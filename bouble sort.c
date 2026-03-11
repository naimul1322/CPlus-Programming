#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the value:" );
    scanf("%d",&n);
    int ara[n+4];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

  /*  int search,temp=0;
    printf("Enter the search number: ");
    scanf("%d",&search);*/

int temp=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
    printf("Asending data:");

    for(i=0; i<=n; i++)
    {
        printf("%d\n",ara[i]);
    }


    return 0;
}
