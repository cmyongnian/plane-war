#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int a[100]={1,1},b[100]={};
int i,j,n;
void print(int a[ ])  //Êä³ö
{
  int i;
  if (a[0]==0)
  {
    cout<<0<<endl;
    return ;
   }
  for(i=a[0];i>0;i--)//µ¹ÐòÊä³ö 
    cout<<a[i];
  cout<<endl;
  return ;
}


void add(int b[],int a[]){
	int i,k;
	if(a[0]<b[0]) a[0]=b[0];
	for(i=1;i<=a[0];i++) a[i]+=b[i];
	for(i=1;i<=a[0];i++)
	{
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	if(a[a[0]+1]>0) a[0]++;
}
void fac(int k,int a[]){
	int i;
	for(i=1;i<=a[0];i++)
	a[i]=a[i]*k;;
	for(i=1;i<=a[0];i++){
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	while(a[a[0]+1]>0){
		a[0]++;
		a[a[0]+1]=a[a[0]]/10;
		a[a[0]]=a[a[0]]%10;
	}
}
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fac(i,a);
		add(a,b);
	}
	print(b);
	return 0;
}
