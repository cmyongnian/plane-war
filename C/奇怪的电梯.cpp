#include<iostream>
#include<cstdio>
using namespace std;
int an[201],bn[201]={0},i,j,m=0,n,a;
void dfs(int an[],int k);
int mi=210;
int main(){
	scanf("%d",&n);
//	scanf("%d%d",&a,&b);
	for(i=0;i<=n+1;i++)
	cin>>an[i];
	dfs(an,an[0]);
	if(mi==210)
	printf("-1");
	else printf("%d",mi);
   return 0;
}
void dfs(int an[],int k){
	if(k==an[1]){
	  if(mi>m)	mi=m;
		return;
	}
	if(k+an[k+1]<=n){
		if(bn[k]==1)
    {   m--;
	    bn[k]=0;
        k-=an[k+1];
        return ;
	}
	       
		m++;bn[k]=1;
		dfs(an,k+an[k+1]);
		
		
	}
	if(k-an[k+1]>0){
		if(bn[k]==1)
    {   m--;bn[k]=0;
        k+=an[k+1];
        return ;
	}
		m++;bn[k]=1;
		dfs(an,k-an[k+1]);
		
	}
}
//呵呵，有一天我做了一个梦，梦见了一种很奇怪的电梯。大楼的每一层楼都可以停电梯，而且第i层楼(1<=i<=N)上有一个数字Ki(0<=Ki<=N)。电梯只有2个按钮：上，下。上下的层数等于当前楼层上的那个数字。当然，如果不能满足要求，相应的按钮就会失灵。例如：3 3 1 2 5代表了Ki(K1=3,K2=3,……)，从一楼开始。在一楼，按“上”可以到4楼，按“下”是不起作用的，因为没有-2楼。那么，从A楼到B楼至少要按几次按钮呢？


