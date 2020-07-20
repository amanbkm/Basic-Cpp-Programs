#include<bits/stdc++.h>
using namespace std;
void equal(int a[],int b[],int m,int n)
{	
	int flag=0;
	sort(a,a+m);
	sort(b,b+n);
	for(int i=0;i<n;++i)
	{
		if(a[i]!=b[i])
			cout<<"Different\n";
		else
			flag=1;
	}
	if(flag==1)
		cout<<"The arrays are Same";
}
int main()
{
	int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    equal(arr1,arr2,n,m);
   	
}
