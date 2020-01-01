#include<stdio.h>
int main()
{
    int n,a[100000],k,or[1000000],and[1000000],xor[1000000],m=0,i,j;
    int max1,max2,max3;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
       a[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            and[m]=a[i]&a[j];
            or[m]=a[i]|a[j];
            xor[m]=a[i]^a[j];
            m++;
        }
    }
    max1=0;
    max2=0;
    max3=0;
    for(i=0;i<m;i++)
    {
        if(max1<and[i] && and[i]<k)
            max1=and[i];
        if(max2<or[i] && or[i]<k)
            max2=or[i];
        if(max3<xor[i] && xor[i]<k)
            max3=xor[i];
    }
    printf("%d\n%d\n%d",max1,max2,max3);
}
