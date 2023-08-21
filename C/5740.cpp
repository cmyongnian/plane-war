#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std; 
int i,j;
struct stu{
	char name[10];
	int chi;
	int mat;
	int eng; 
	int sum;
}; 
bool cmp_score(stu x,stu y){
	return x.sum > y.sum;}
int main(){
  int n;
  scanf("%d",&n);
  struct stu student[1001];
  for(i=0;i<n;i++){
  	scanf("%s%d%d%d",&student[i].name,&student[i].chi,&student[i].mat,&student[i].eng);
  	student[i].sum=student[i].chi+student[i].mat+student[i].eng;
  }

  sort(student,student+i,cmp_score);
  
  	printf("%s %d %d %d",&student[0].name,&student[0].chi,&student[0].mat,&student[0].eng);
  
  return 0;
}
