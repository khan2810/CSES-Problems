#include <bits/stdc++.h>
using namespace std;
long long solve(long long apple[],int n,long long sum1,long long sum)
{
    if(n==0)
    return abs((sum-sum1)-sum1);
    
    long long include=solve(apple,n-1,sum1+apple[n-1],sum);
    long long exclude=solve(apple,n-1,sum1,sum);
    return min(include,exclude);
}
// Driver code
int main()
{
    int n;
    cin>>n;
    long long apple[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>apple[i];
        sum+=apple[i];
    }
    long long sum1=0;
    cout<<solve(apple,n,sum1,sum);
    return 0;
}