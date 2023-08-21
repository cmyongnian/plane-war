#include<cstdio>
int main(){
	char a[3][10]={"ab","cd","ef"};
	a[2][0]=a[1][0];
	for(int i=0;i<=2;i++)
	printf("%s",a[i][i]);
	return 0;
} 
