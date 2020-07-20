#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"\nEnter the array:\n";
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter the no of shifts:";
	cin>>m;
	int j=0;
	int k=0;
	vector<int> even; 
    vector<int> odd; 
    for (int i = 0; i < n; i++) 
	{ 
        if (!(i % 2)) 
            even.push_back(arr[i]); 
        else
            odd.push_back(arr[i]); 
    } 
    /*for(int i=0;i<sizeof(odd);++i)
    {
    	cout<<odd[i]<<" ";
	}*/
	void shift_odd(int arr[],int rot)
	{
		
		for(int i=0;i<sizeof(arr);++i)
		{
			arr[i]=arr[]
		}
	}
}
