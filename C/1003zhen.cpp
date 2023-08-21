#include<stdio.h>
static int ground[10001] [10001]={};
int a,b,g,k,i,m,n,px,py;
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d",&a,&b,&g,&k);
		for(m=0;m<g;m++)
		{
			for(n=0;n<k;n++)
			{
				ground[a+m][b+k]+=1;
			}
		}
		
	}
		scanf("%d%d",&px,&py);
		printf("%d",ground[px][py]);
		return 0;
	}

