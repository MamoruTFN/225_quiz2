#include<stdio.h>

int main()
{
    int n,p[1000000],m,j,i,c=0,count=0;
    scanf("%d",&n);
    m=n;

    for(i=1;i<n;i++)
    {
        for(j=0;m>=1;j++)
        {
            p[j]=m%10;
            m/=10;
        }
        for(int k=0,z=j-1;k<j-1;k++,z--)
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

    return 0;
}
