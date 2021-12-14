#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long n;
    cin>>n;
    if(((n*(n+1))/2)%2==1)
    cout<<"NO";
    else
    {
       cout<<"YES"<<endl;
       set<int> s1;
       set<int> s2;
       long long sum=(n*(n+1))/4;
       for(int i=n;i>=1;i--)
       {
           if(sum>=i)
           {
              s1.insert(i);
              sum-=i;
           }
           else
           {
               s2.insert(i);
           }
       }
       cout<<s1.size()<<endl;
       for(auto i:s1)
       cout<<i<<" ";
       cout<<endl<<s2.size()<<endl;
       for(auto i:s2)
       cout<<i<<" ";
       
    }
    return 0;
}
