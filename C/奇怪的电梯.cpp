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
//�Ǻǣ���һ��������һ���Σ��μ���һ�ֺ���ֵĵ��ݡ���¥��ÿһ��¥������ͣ���ݣ����ҵ�i��¥(1<=i<=N)����һ������Ki(0<=Ki<=N)������ֻ��2����ť���ϣ��¡����µĲ������ڵ�ǰ¥���ϵ��Ǹ����֡���Ȼ�������������Ҫ����Ӧ�İ�ť�ͻ�ʧ�顣���磺3 3 1 2 5������Ki(K1=3,K2=3,����)����һ¥��ʼ����һ¥�������ϡ����Ե�4¥�������¡��ǲ������õģ���Ϊû��-2¥����ô����A¥��B¥����Ҫ�����ΰ�ť�أ�


