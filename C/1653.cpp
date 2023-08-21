#include<instream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,m,i,j;
struct peo{
	int dire;
	char name[11];
	struct peo *next;
}; 
struct peo_node *create(){
   struct peo *head,*tail,*p;
   int dire;
   head=tail=NULL;
   	p=(struct peo *)malloc(sizeof(struct peo));
   	
   	scanf("%d",&(p->dire));
   	scanf("%s",p->name);
   	p->next = NULL;
   	if(head == NULL)
   	  head = p;
   	else
   	 tail->next=p;
   	 tail = p;
   }
   return head;
} 
int main()
{
	scanf("%d",&n);
	struct *head;
	for(i=0;i<n;i++)
	*head=peo_node *create(); 
}
