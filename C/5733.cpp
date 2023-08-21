#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[101];
int i;
int main(){
	cin>>a;
	
	for(i=0;i<strlen(a);i++)
	if(a[i]>='a'&&a[i]<='z')
	a[i]+='A'-'a';
	cout<<a;
	return 0;
}
