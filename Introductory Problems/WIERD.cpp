#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin>>n;
	while(true)
	{
	    if(n==1)
	    {
	        cout<<n<<" ";
	        break;
	    }
	    if(n%2==0)
	    {
	        cout<<n<<" ";
	        n=n/2;
	    }
	    else
	    {
	        cout<<n<<" ";
	        n=n*3+1;
	    }
	}
	return 0;
}
