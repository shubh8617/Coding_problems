#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int d)
		{
			data=d;
			next=NULL;
		}
};
void insertfront(node* &head,node* &tail,int d)     // to create node = new node(d)
{
	if(head==NULL)
	{
		head=tail=new node(d);
	}
	else
	{
	node* np=new node(d); //allocate memory to node
	np->next=head;
	head=np;
}
}
void display(node* head)
{
	while(head)
	{
		cout<<head->data<<"--->";
		head=head->next;
	}
	cout<<"NULL"<<"\n";
}
int main()
{
	node* head=NULL; 
	node* tail=NULL; 
	cout<<"Enter no of elements you want to insert"<<" ";
     int num;
     cin>>num;
     	for(int i=1;i<=num;i++)
	{
		int k;
		cin>>k;
		insertfront(head,tail,k);
	}
	cout<<"Linked list after insertion is "<<endl;
	display(head);
	  node* curr;
      int c=0;
   
   for(curr=head;curr!=NULL;curr=curr->next)
       c++;
       curr=head;
     for(int i=0;i<c/2;i++)
     curr=curr->next;
     cout<<"Middle element of the linked list is:- "<< curr->data;
}
