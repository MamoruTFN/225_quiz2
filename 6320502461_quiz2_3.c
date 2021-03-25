#include<stdio.h>

int main()
{
    int n,p[10],m,j,i,c=0,count=0,k,z;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        m=i;
        for(j=0;m>0;j++)
        {
            p[j]=m%10;
            m/=10;
        }
        for(k=0,z=j-1;k<j-1;k++,z--)
        {
            if(p[k]!=p[z])
            {
                c=1;
            }
        }
        if(c==0)
        {
            count++;
        }
        else
        {
            c=0;
        }
    }
    printf("%d",count);

    return 0;
}
