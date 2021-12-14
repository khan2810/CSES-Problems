#include <bits/stdc++.h>
using namespace std;

void solve(int n,char left, char mid,char right)
{
    if(n==1)
    {
        cout<<left<<" "<<right<<endl;
        return;
    }
    solve(n-1,left,right,mid);
    cout<<left<<" "<<right<<endl;
    solve(n-1,mid,left,right);
}
int main()
{
	// your code goes here
	int n;
	cin>>n;
	
	char left='1';
	char mid='2';
	char right='3';
	cout<<pow(2,n)-1<<endl;
	solve(n,left,mid,right);
	return 0;
}
