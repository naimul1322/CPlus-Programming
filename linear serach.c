#include<stdio.h>
int main()
{
    int n,i,found=-1;
    printf("Enter the number: ");
    scanf("%d",&n);
    int ara[n+4];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int serachnumber;
    printf("Enter the search number: ");
    scanf("%d",&serachnumber);
    for(i=0;i<n; i++)
    {
        if(ara[i]==serachnumber)
        {
            found=i;
            break;
        }
    }
    if(found==-1)
    {
        printf("%d data not found.",serachnumber);
    }
    else{
        printf("%d data is found ",serachnumber);
    }
    return 0;
}
