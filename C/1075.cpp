#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int n,a,b,x,y,i,j;
int prime(int m);
int main(){
	scanf("%d",&n);
	if(n==2){
	
	printf("2");
	return 0;
}
	if((n % 2)==0){
	
	
	printf("%d",n/2);
	return 0;}
	
	if(n==1){
	
	printf("1");
	return 0;
}
	
	for(i=3;;i+=2){
		a=prime(i);
		if (a==1&&(n%i==0))
		{
		printf("%d",n/i);
		break;}
	}
return 0;
}	
int prime(int m){
   int a=1;
    for(j=3;j<=sqrt(m);j+=2){
    	if(m % j==0)
    		a=0;
    		break; 
		
	}
	if(a==1) return 1;
	else return 0;
	
}
