#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[101];
int i,n,m;
int main(){
	cin>>n>>a;
	if(n>=26) n=n%26;
	for(i=0;i<strlen(a);i++)
	
	{if(n>=26) n=n%26;
	a[i]=(a[i]-'a'+n)%26+'a'
	cout<<a;}
	return 0;
}
