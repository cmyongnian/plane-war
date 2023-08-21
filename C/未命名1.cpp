#include<stdio.h> 
#include<string.h> 
char a1[1000],b1[1000],str[1000][2];
int a[1000],b[1000],c[1000],lena,lenb,lenc,i,x,n;
int main()
{ 
    int m,j;
	scanf("%d",&n);
	m=n;
	while(scanf("%s%s",a1,b1) != EOF){
	for(i=1;i<=m;i++)
	{   
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		getchar(); 
		scanf("%s",a1);
		scanf("%s",b1);
	
		lena=strlen(a1);
		lenb=strlen(b1);
		for(j=0;j<=lena-1;j++)
		a[lena-j]=a1[j]-48;
		for(j=0;j<=lenb-1;j++)
		b[lena-j]=b1[j]-48;
		lenc=1;
		x=0;
		while(lenc<=lena||lenc<=lenb)
		{
			c[lenc]=a[lenc]+b[lenc]+x;
			x=c[lenc]/10;
			c[lenc]%=10;
			lenc++; 
		}
		c[lenc]=x;
		if(c[lenc]==0)
		lenc--;
		printf("Case %d:\n",i );
		printf("%s",a1);
		 printf(" + ");
		printf("%s",b1);
		   printf(" = ");
		for(j=lenc;j>=1;j--)
		{
			printf("%d",c[j]);
		}
		printf("\n");
	}
}
	return 0;
}

