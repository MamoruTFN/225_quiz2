#include<stdio.h>
#include<string.h>

int main()
{
    int m,n,p,q,r;
    scanf("%d",&m);
    scanf("%d",&n);
    char s[m][70];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<70;j++)
        {
            s[i][j]='o';
        }
    }

    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&p,&q,&r);
        for(int j=q;j<r+q;j++)
        {
            s[p-1][j-1]='x';
        }
    }



    for(int i=0;i<m;i++)
    {
        for(int j=0;j<70;j++)
        {
            printf("%c",s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
