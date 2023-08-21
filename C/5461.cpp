#include<iostream>
#include<cstdio>
#include<cstring> 
#include<cmath>
using namespace std;
int n,m,le,re,i,j;
int a[1025][1025];
void save(int x,int y,int z);
int main(){
	scanf("%d",&n);
	m=pow(2,n);
	for(i=1;i<=m;i++){
	for(j=1;j<=m;j++){
		a[i][j]=1;}}
	le=1;
	re=m;
	save(m,1,1);
	for(i=1;i<=m;i++){
	
	for(j=1;j<=m;j++){
		printf("%d ",a[i][j]);
	}printf("\n");
}
return 0;
}
void save(int x,int y,int z){
		int i,j;
	if(x==2){
		a[y][z]=0;
		return ;
	}
	for(int i=y; i<=y+x/2-1; i++)
		for(int j=z; j<=z+x/2-1; j++)
			a[i][j]=0;

	save(x/2,y+x/2,z);
	save(x/2,y+x/2,z+x/2); 
	save(x/2,y,z+x/2);
}



