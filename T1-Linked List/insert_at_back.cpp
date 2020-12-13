


#include<bits/stdc++.h>
using namespace std;
class node{ //used for creating a node
	public:
		int data; //store the contents
		node* next; //for storing address, acts as a pointer
	node(int d)
	{
		data=d; //5
		next=NULL; //null	
	}
};
void insertback(node* &head,node* &tail,int d)   
{
	if(head==NULL)
	{
		head=tail=new node(d);
	}
	else
	{
	node* n=new node(d); //allocate memory to node
	tail->next=n;
	tail=n;
}
}
void display(node* head)
{
	if(head!=NULL)
	{
		cout<<head->data<<"--->";
		display(head->next);   //recursive calling
	}
	else
	cout<<"NULL"<<"\n";
}
int main()
{
	node* head=NULL; 
	node* tail=NULL;
	int n; 
	cout<<"No of elements you want to insert :- "<<" ";
	 cin>>n;
	for(int i=1;i<=n;i++)
	{
		int k;
		cin>>k;
		insertback(head,tail,k);
	}
	cout<<"after inserting at back elements will be :- "<<endl;
	display(head);
}

