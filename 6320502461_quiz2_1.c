#include<stdio.h>

int main()
{
    int n,count=0,i,m,c=0;
    scanf("%d",&n);
    m=n;
    for(i=2; i<=n; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(m%i==0)
            {
                m/=i;
                count++;
            }

        }
        if(count==3&&m==1)
        {
            break;
        }
        else
        {
            count=0;
            m=n;
            c++;
        }
    }

    if(count==3)
    {
        printf("Not Cube Free");
    }
    else
    {
        printf("%d",c);
    }

    return 0;
}
