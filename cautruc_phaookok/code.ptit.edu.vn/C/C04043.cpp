#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>
int cmp (const void * a, const void * b) {
   return ( *(long long*)a - *(long long*)b );
}
bool abc(long long a[],long long i,long long j)
{
    long long x=0,y=j-1;
    while(x<=y)
    {
        long long num=(x+y)/2;
        if(a[num]==i) return 1;
        else if(a[num]<i) x=num+1;
        else if(a[num]>i) y=num-1;
    }
    return 0;
}
bool KiemTraPytago(long long a[],int n)
{
    for(long long i=0;i<n-1;i++)
    {
        for(long long j=i+1;j<n;j++)
        {
            if(abc(a,a[i]+a[j],n)) return 1;
        }
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int z=1;z<=t;z++)
    {
        int n;
        scanf("%d",&n);
        long long a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            a[i]*=a[i];
        }
        qsort(a, n, sizeof(long long), cmp);
        if(KiemTraPytago(a,n)==1) printf("YES\n");
        else printf("NO\n");
    }
}
