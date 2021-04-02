#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	vector<int>arr;
	ll a;
	for(int i=0;i<t;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	
	ll e=0,o=0,c1=0,c2=0;
	for(int i=0;i<t;i++)
	{
		if(arr[i]%2==0)
		 {
		 	e=arr[i];
		 	c1++;
		 }
		 else
		 {
		 	o=arr[i];
		 	c2++;
		 }
	}
}
