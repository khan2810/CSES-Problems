#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    string str;
    cin>>str;
    sort(str.begin(), str.end());
    int ans=0;
    do {
        ans++;
    } while (next_permutation(str.begin(), str.end()));
    cout<<ans<<endl;
    do {
       cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
    return 0;
}