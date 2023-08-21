#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int t,m,i,j;
int a[101][2],dp[1010][1010];
int main(){
	memset(a,0,sizeof(a));
	memset(dp,0,sizeof(dp));
	scanf("%d%d",&t,&m);
	for(i=1;i<=m;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	for(i=1;i<=m;i++)
	for(j=1;j<=t;j++){
	if(j<a[i][0])
	dp[i][j]=dp[i-1][j];
	else
	dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i][0]]+a[i][1]);
	
	}
	printf("%d",dp[m][t]);
	return 0;
}

