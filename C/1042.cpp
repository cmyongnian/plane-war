#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int win [62510];
int a,b;
int main(){
	char s;
	memset(win,0,sizeof(win));
	for(int i=1;cin>>s&&s!='E';i++)
	{
		if(s=='W')win[i]=1; 
		else win[i]=2; }
		
	int i=1;
	if(win[0]==0)
	printf("0:0");
	while(win[i]!=0){
		if(win[i]==1)
			a++;
		if(win[i]==2)
		b++;
		if(a>=11&&(a-b)>=2){
		
		printf("%d:%d\n",a,b);
		a=0;b=0;}
		if(b>=11&&(b-a)>=2){
		printf("%d:%d\n",a,b);
		a=0;b=0;}
		if(win[i+1]==0)
		printf("%d:%d\n",a,b);
		i++;
	}
	 i=1;a=0;b=0;
	printf("\n");
		if(win[0]==0)
	printf("0:0");
		while(win[i]!=0){
		if(win[i]==1)
			a++;
		if(win[i]==2)
		b++;
		if(a>=21&&(a-b)>=2){
		
		printf("%d:%d\n",a,b);
		a=0;b=0;}
		if(b>=21&&(b-a)>=2){
		printf("%d:%d\n",a,b);
		a=0;b=0;}
		if(win[i+1]==0)
		printf("%d:%d\n",a,b);
		i++;
	}
	return 0;
}
