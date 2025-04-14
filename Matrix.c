#include<stdio.h>
int main()
{
    int count=0;
    int arr[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                count+=abs(2-i)+abs(2-j);
            }
        }
    }
    printf("%d",count);
    return 0;
}