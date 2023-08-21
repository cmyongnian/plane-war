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
int compare (int a[],int b[]) //�Ƚϴ�С
{ 
    int i; 
    if (a[0]>b[0]) return 1;//a��λ������b��a��b�� 
    if (a[0]<b[0]) return -1;//a��λ��С��b��a��bС 
    for(i=a[0];i>0;i--)  //�Ӹ�λ����λ�Ƚ� 
     { 
	    if (a[i]>b[i]) return 1; 
        if (a[i]<b[i]) return -1;
    } 
    return 0;//��λ�������������ȡ� 
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
	  if (flag==-1)//С��  ����a=b-a,Ȼ��ǰ��Ӹ����� 
   { 
        cout<<"-"; //��������� 
        for(i=1;i<=b[0];i++)
        {
		    if(b[i]<a[i]){b[i+1]--;b[i]+=10;} //�������������Ͻ�һλ 
            a[i]=b[i]-a[i];//��סҪ�ѽ������������a�� 
	   } 
        a[0]=b[0]; 
        while(a[a[0]]==0) a[0]--; //����a��λ�� 
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
	   for(i=1;i<=a[0];i++)  //�����λ
    { 
	    c[i+1]+=(c[i]/10);
        c[i]%=10;
   }
    while(c[c[0]+1]>0)//�������λ��˵Ľ�λ
    { 
        c[0]++; 
        c[c[0]+1]=c[c[0]]/10;
        c[c[0]]=c[c[0]]%10;
   }
	  while(c[0]>0&&c[c[0]]==0) c[0]--;
}
void numcpy(int a[],int b[],int dest) //���ƶ��� 
{
	for(int i=1;i<=a[0];i++)//ע�������ǵ��򴢴�ø߾�������
	{
		b[i+dest-1]=a[i];
	}
	b[0]=a[0]+dest-1;
 } 
void div(int a[],int b[],int c[])//c=a/b 
{
    int i,j,tmp[10001]; 
    c[0]=a[0]-b[0]+1;//����a=c*b�Ƴ� 
    for (i=c[0];i>0;i--)
    {
        memset(tmp,0,sizeof(tmp));       //���� 
        numcpy(b,tmp,i);                //��b������tmp�ĵ�iλ,����λ��0
        while(compare(a,tmp)>=0)       //���� 
		{
		    c[i]++;
			sub(a,tmp);      //�ü�����ģ��
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
