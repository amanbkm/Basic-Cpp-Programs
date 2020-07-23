#include<iostream>
using namespace std;
int queue[50],choice,x,n,front=-1,rear=-1;
void enqueue(void);
void dequeue(void);
void display(void);
int main()
{
	cout<<"Enter the size of the Queue\t";
	cin>>n;
	do
	{
		cout<<"\n\t1.Insert\n\t2.Delete\n\t3.display\nEnter the Choice\t";
		cin>>choice;
		switch(choice)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:cout<<"Error";break;
		}
	}
	while(choice!=4);
	return 0;
}
void enqueue()
{
	if(front>n && rear>n)
	{
		cout<<"Queue Overflow";
	}
	else
	{
		front=0;
		rear=0;
		cout<<"Enter the Element to be inserted\t";
		cin>>x;
		queue[rear]=x;
		rear++;
	}
}
void display()
{
	if(front==-1 && rear==-1)
		cout<<"Queue Empty";
	else
	{
		for(int i=front;i<=rear;++i)
		{
			cout<<queue[i]<<"\t";
		}
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
		cout<<"Queue Empty";
	else
	{
		cout<<"The Deleted Element is\t"<<queue[front];
		front=front++;
	}
}
