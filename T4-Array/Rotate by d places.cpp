//Left rotate by d places(naive approach) time complexity= theta(d*n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	int d;
	cout<<"No of d places "<<"\n"; 
	cin>>d;
	while(d--)
	{
		int temp=arr[0];
    	for(int i=1;i<n;i++)
    	{
		arr[i-1]=arr[i];
		
	    }
    	arr[n-1]=temp;
	}
	
 
  for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}
