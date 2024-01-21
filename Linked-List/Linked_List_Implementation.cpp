#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* ptr;
};
Node *first=NULL,*last=NULL;

void create(int n){
	Node *tmp;
	tmp=new Node;
	tmp->data=n;
	tmp->ptr=NULL;
	if(first){
		last->ptr=tmp;
		last=tmp;
	}
	else{
		first=last=tmp;
		// cout<<first->data<<endl;
	}
}

int main()
{
	create(10);
	create(20);
	// cout<<first->data;
	Node *i=first;
	while(i)
	{
		cout<<i->data<<endl;
		i=i->ptr;
	}
	return 0;
}
