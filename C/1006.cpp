#include<iostream> 
#include<cstring>
#include<cstdio>
using namespace std;
int f[55][55][55][55],a[55][55];
int n,m,i,j,k,l;
int max_ne(int a,int b,int c,int d){
	if(b>a)
	a=b;
	if(c>a)
	a=c;
	if(d>a)
	a=d;
	return a;
}
int main(){
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	   for(j=1;j<=m;j++)
	      scanf("%d",&a[i][j]);
    for(i=1;i<=n;i++){
    	for(j=1;j<=m;j++){
    		for(k=1;k<=n;k++){
    			for(l=j+1;l<=m;l++){
    				f[i][j][k][l]=max_ne(f[i][j-1][k-1][l],f[i-1][j][k][l-1],f[i][j-1][k][l-1],f[i-1][j][k-1][l])+a[i][j]+a[k][l];
				}
			}
		}
	}
printf("%d",f[n][m-1][n-1][m]);
return 0;	
	
}
