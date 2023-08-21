#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int a,b,i,j;
char x,y;
int bg[110][110];
int main(){
	memset(bg,0,sizeof(bg));
	scanf("%d%d",&a,&b);
	
    for(i=1;i<=a;i++){
	
    for(j=1;j<=b;j++){
    	cin>>x;
    	if(x=='*')
    	bg[i][j]=-100;
	}
}

	for(i=1;i<=a;i++)
    for(j=1;j<=b;j++){
    	if(bg[i][j]<0)
    	{bg[i+1][j]++;
    	bg[i+1][j+1]++;
    	bg[i][j+1]++;
    	bg[i-1][j]++;
    	bg[i+1][j-1]++;
    	bg[i-1][j+1]++;
    	bg[i][j-1]++;
    	bg[i-1][j-1]++;
        }
	}
	for(i=1;i<=a;i++){
	
    for(j=1;j<=b;j++){
    	if(bg[i][j]>=0)
    	printf("%d",bg[i][j]);
    	else
    	printf("*");
	}
     printf("\n");}
	return 0;
} 

