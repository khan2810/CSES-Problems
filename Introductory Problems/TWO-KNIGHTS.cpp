#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    for(long long k=1;k<=n;k++)
    {
        if(k<=2)
        cout<<((k*k)*(k*k-1))/2<<endl;
        else
        cout<<((k*k)*(k*k-1))/2-((2*k-3)*(2*k-3)-1)<<endl; 
    }
    return 0;
}
