#include <iostream>
using namespace std;
int mod=1000000007;
int main() {
	// your code goes here
	int n;
	cin>>n;
	int ans=1;
	for(int i=0;i<n;i++)
	{
	    ans=((ans%mod)*2)%mod;
	}
	cout<<ans;
	return 0;
}
