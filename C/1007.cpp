#include<iostream> 
#include<cstring>
#include<cstdio>
using namespace std;
int i,m,n,l;
int a[10]={0,1,2,3,4,5,6,7,8,9}
int sus(int p); 
int main(){
	for(i=100;i<=398;i++){
		m=sus(i);
		if(m==1)
		printf("%d %d %d\n",i,2*i,3*i);
	}
return 0; 
}

int sus(int p)
{
	int x1,y1,z1,x2,y2,z2,x3,y3,z3;
	x1=p%10;
	y1=p/10%10;
    z1=p/100%10;
    x2=2*p%10;
	y2=2*p/10%10;
    z2=2*p/100%10;
    x3=3*p%10;
	y3=3*p/10%10;
    z3=3*p/100%10;
    if(x1==0||y1==0||z1==0||x2==0||y2==0||z2==0||x3==0||y3==0||z3==0)
    return 0;
    
   
}

