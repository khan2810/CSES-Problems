#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	int ans=0,i=0,j=n-1;
	while(i<=j)
	{
	    if(a[i]+a[j]<=x)
	    {
	        ans++;
	        i++;
	        j--;
	    }
	    else
	    {
	        ans++;
	        j--;
	    }
	}
	cout<<ans<<endl;
	return 0;
}
