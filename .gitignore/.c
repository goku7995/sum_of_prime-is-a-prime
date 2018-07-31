#include <stdio.h>
int prime(int n)
{
    int i,j,count,sum=0;
    for(i=2;i<n;i++)
    {
        count=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            sum=sum+i;
            if(sum==n)
            {
                printf("Co-Primes%d\n",sum);
                return 1;
            }
            if(sum>n)
                return 0;
        }
    }
    
}
int main()
{
    int i,j,n,k,count=0,sum=-1;
    scanf("%d",&n);
    for(i=3;i<=n;i=i+2)
    {
        count=0;
        for(j=3;j<=i/2;j=j+2)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && prime(i))
        {
            sum++;
        }
    }
    printf("%d coprimes",sum);
    return 0;
}
