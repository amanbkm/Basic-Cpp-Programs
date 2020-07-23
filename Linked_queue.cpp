#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;   
};
struct node*front=NULL;
struct node*rear=NULL;
void enqueue(int x)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node*)); 
	temp->data = x; 
	temp->link = NULL; 
	if(front ==NULL && rear == NULL) 
	{ 
		front = rear = temp; 
		return; 
	} 
	rear -> link = temp; 
	rear = temp;
}
void dequeue()
{
	struct node*temp=front;
	if (front == NULL) 
		return;
	if(front = rear) 
	{ 
		front = rear = NULL; 
	} 
	else 
	{ 
		front  = front ->link; 
	} 
	free(temp);	
}
void display()
{
	if (front == NULL) 
		return;
	if(front = rear) 
	{ 
		front = rear = NULL; 
	} 
	else 
	{ 	
		cout<<"\n"<<front->data;
		front  = front ->link; 
	} 
}

int main()
{
	int y,n;
	char ch;
	cout<<"Enter the number of elements\t";
	cin>>n;
	cout<<"\nEnter your choice\t1.Insert\n2.Delete\t3.Display\t";
	cin>>ch;
	switch(ch)
	{
		case 1: {
					for(int i=0;i<n;++i)
						{
							cout<<"\nEnter the number to be inserted\t";
							cin>>y;
							enqueue(y);
						}
							break;
				}
		case 2: dequeue(); break;
		case 3: display(); break;
	}
	
}
