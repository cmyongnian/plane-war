#include<iostream> 
#include<cstdio>
using namespace std;
int n,i,j;
struct student{
	char name[100];
	int year;
	float cj;
}stu[6];

int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s%d%f",stu[i].name,&stu[i].year,&stu[i].cj);
		stu[i].year++;
		stu[i].cj=stu[i].cj*1.2;
		if(stu[i].cj>600)
		stu[i].cj=600;
	}
	for(i=1;i<=n;i++){
		printf("%s %d %.0f\n",stu[i].name,stu[i].year,stu[i].cj);
	}
}
