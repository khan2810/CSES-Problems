#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int ans=0;
	int divi=5;
	while(n/divi!=0)
	{
	    ans=ans+n/divi;
	    divi=divi*5;
	}
	cout<<ans;
	return 0;
}
