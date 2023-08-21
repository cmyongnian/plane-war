#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int max_ex(int a,int b);
int r,a[1010][1010],m,n,i,j,ans,dp[1010][1010];
int main(){
	scanf("%d",&r);;
	memset(a,0,sizeof(a));
	for(i=1;i<=r;i++)
		for(j=1;j<=i;j++){
			scanf("%d",&a[r-i+1][j]);
		}
	for(i=1;i<=r;i++)
	for(j=1;j<=r-i+1;j++){
		dp[i][j]=max_ex((dp[i-1][j]+a[i][j]),(dp[i-1][j+1]+a[i][j]));}
	printf("%d",dp[r][1]);
	return 0;
}

int max_ex(int a,int b){
	if(b>a)
	a=b;
	return a;
}
