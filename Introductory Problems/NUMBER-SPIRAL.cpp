#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        long long y,x;
        cin>>y>>x;
        if(max(y,x)%2==1)
        {
            if(y>=x)
            cout<<(max(y,x)-1)*(max(y,x)-1)+x<<endl;
            else
            cout<<(max(y,x))*(max(y,x))-y+1<<endl;
        }
        else
        {
            if(y>=x)
            cout<<(max(y,x))*(max(y,x))-x+1<<endl;
            else
            cout<<(max(y,x)-1)*(max(y,x)-1)+y<<endl;
        }
    }
   
    return 0;
}
