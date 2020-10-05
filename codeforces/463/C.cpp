#include<cstdio>
#include<algorithm>
#define base 2500
int n,x1,y1,x2,y2;
long long a[5005][5005],f[5005],g[5005],s1,s2;
int main()
{
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++)
	        scanf("%lld",&a[i][j]);
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++)
	        f[i+j]=f[i+j]+a[i][j],g[i-j+base]=g[i-j+base]+a[i][j];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++)
		{
			long long s=f[i+j]+g[i-j+base]-a[i][j];
			if ((i+j)&1) {if (s>=s1) s1=s,x1=i,y1=j;}
			else if (s>=s2) s2=s,x2=i,y2=j;
		}
	printf("%lld\n",s1+s2);
	printf("%d %d %d %d\n",x1,y1,x2,y2);
	return 0;
}