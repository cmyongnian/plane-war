#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int bg[30][30],x[50],y[50],xy[50],x_y[50];
int i,j,a,b,n,total;
int print()
{
    if(total<=2)//��ֻ֤���ǰ�����⣬����ⳬ�������Ͳ���������������total����Ҫ��������
    {
        for(int k=1;k<=n;k++)
        cout<<x[k]<<" ";//for������
        cout<<endl;
    }
    total++;//total����������Ҳ��ǰ�������е��ж�
}
void dfs(int i){
	if(i>n){
		print();
		return;
	}
	else{
		for(j=1;j<=n;j++){
			if((!y[j])&&(!xy[i+j]&&(!x_y[i-j+n]))){
				x[j]=j;
				y[j]=1;
				xy[i+j]=1;
				x_y[i-j+n]=1;
				dfs(i+1);
				y[j]=0;
				xy[i+j]=0;
				x_y[i-j+n]=0;
			}
		}
	}
}
int main(){
	memset(bg,0,sizeof(bg));
	
	scanf("%d",&n);
	dfs(1);
	cout<<total;
	return 0;

}


