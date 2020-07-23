#include<iostream>
using namespace std;

int stack[100],top=-1,choice,n,x;
void push(void);
void pop(void);
void display(void);
int main()
{
	cout<<"Enter the size of the stack\t";
	cin>>n;
	do
	{	
		cout<<"Enter the choice\n\t\t\t\t1.Push\n\t\t\t\t2.Display\n\t\t\t\t3.Pop\n";
		cin>>choice;
		switch(choice)
		{
			case 1:push(); break;
			case 2:display(); break;
			case 3:pop(); break;
			case 4:cout<<"Error"; break;
		}
	}
	while(choice!=4);
	return 0;
}
void push()
{
	if (top>=n)
		cout<<"Stack Overflow";
	else
	{
		cout<<"Enter the element to be inserted\t";
		cin>>x;
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
		cout<<"Stack Underflow";
	else
	{
		cout<<"Deleted Element is\t\n"<<stack[top];
		--top;
	}
}
void display()
{
	if(top==-1)
		cout<<"Stack Underflow";
	else
	{
		for(int i=top;i>=0;--i)
		{
			cout<<stack[i]<<"\n";
		}
	}
}
