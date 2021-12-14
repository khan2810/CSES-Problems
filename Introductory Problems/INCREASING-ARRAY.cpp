#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    long long moves=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            moves+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<moves;
    return 0;
}
