#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int a[10001],b[10001],i,j,s[10001];
char al[10001],bl[10001],c;
void print(int a[]);
void add(int a[],int b[]){
	int i,k;
	if(a[0]<b[0]) a[0]=b[0];
	for(i=1;i<=a[0];i++){
		a[i]+=b[i];
	}
	for(i=1;i<=a[0];i++)
	{
	 a[i+1]+=a[i]/10;
	 a[i]%=10;
	}
	if(a[a[0]+1]>0) a[0]++;
}
int compare (int a[],int b[]) //比较大小
{ 
    int i; 
    if (a[0]>b[0]) return 1;//a的位数大于b则a比b大 
    if (a[0]<b[0]) return -1;//a的位数小于b则a比b小 
    for(i=a[0];i>0;i--)  //从高位到低位比较 
     { 
	    if (a[i]>b[i]) return 1; 
        if (a[i]<b[i]) return -1;
    } 
    return 0;//各位都相等则两数相等。 
} 
void sub(int a[],int b[]){
	int flag,i;
	flag=compare(a,b);
	if(!flag){a[0]=0;return;
	}
	if(flag==1)
	{
		for(i=1;i<=a[0];i++){
		
		 if(a[i]<b[i]){
		 	a[i+1]--;
		 	a[i]+=10;
		 }
		 a[i]=a[i]-b[i];}
        while(a[a[0]]==0) a[0]--;
        return;
	}
	  if (flag==-1)//小于  则用a=b-a,然后前面加个负号 
   { 
        cout<<"-"; //先输出负号 
        for(i=1;i<=b[0];i++)
        {
		    if(b[i]<a[i]){b[i+1]--;b[i]+=10;} //若不够减则向上借一位 
            a[i]=b[i]-a[i];//记住要把结果储存在数组a中 
	   } 
        a[0]=b[0]; 
        while(a[a[0]]==0) a[0]--; //修正a的位数 
        return;
   } 
}
void mult(int a[],int b[],int c[]){
	int i,j,len;
	for(i=1;i<=a[0];i++)
	  for(j=1;j<=b[0];j++){
	  	c[i+j-1]+=a[i]*b[j];
	  }
	  c[0]=a[0]+b[0]-1;
	   for(i=1;i<=a[0];i++)  //处理进位
    { 
	    c[i+1]+=(c[i]/10);
        c[i]%=10;
   }
    while(c[c[0]+1]>0)//处理最高位相乘的进位
    { 
        c[0]++; 
        c[c[0]+1]=c[c[0]]/10;
        c[c[0]]=c[c[0]]%10;
   }
	  while(c[0]>0&&c[c[0]]==0) c[0]--;
}
void numcpy(int a[],int b[],int dest) //右移对齐 
{
	for(int i=1;i<=a[0];i++)//注意我们是倒序储存得高精度数字
	{
		b[i+dest-1]=a[i];
	}
	b[0]=a[0]+dest-1;
 } 
void div(int a[],int b[],int c[])//c=a/b 
{
    int i,j,tmp[10001]; 
    c[0]=a[0]-b[0]+1;//可由a=c*b推出 
    for (i=c[0];i>0;i--)
    {
        memset(tmp,0,sizeof(tmp));       //清零 
        numcpy(b,tmp,i);                //将b拷贝到tmp的第i位,其余位是0
        while(compare(a,tmp)>=0)       //试商 
		{
		    c[i]++;
			sub(a,tmp);      //用减法来模拟
		}                                                          
    }
   while(c[0]>0&&c[c[0]]==0) c[0]--;
   return ;
}

int main()
{
	scanf("%s",al);
	getchar();
	scanf("%c",&c);
	getchar();
	scanf("%s",bl);
	a[0]=strlen(al);
	b[0]=strlen(bl);
	for(i=1;i<=a[0];i++)
	{
	
		a[i]=al[a[0]-i]-'0';
	}
	for(i=1;i<=b[0];i++)
	{
	
		b[i]=bl[b[0]-i]-'0';
	}
	if(c=='+'){ add(a,b);
    print(a);
  	}
		if(c=='-'){sub(a,b);	
	print(a);
	}
		if(c=='*'){mult(a,b,s);
		
		print(s);
	}
		if(c=='%'){div(a,b,s);
		print(s);
	}
	return 0;
}
void print(int a[]){
	int i;
	if(a[0]==0)
	{
		cout<<0;
		return ;
	}
	for(i=a[0];i>0;i--)
    cout<<a[i];
  cout<<endl;
  return ;
	
}
