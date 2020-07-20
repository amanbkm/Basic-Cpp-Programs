#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int n,count=1;
	cout<<"Enter the number of rows\t";
	cin>>n;
	cout<<"\n";
	for(int i=1;i<n;++i)
	{
		for(int space=1;space<n-i;space++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;++j)
		{
			cout<<count<<" ";
			count++;
		}
		cout<<"\n";
	}
}
