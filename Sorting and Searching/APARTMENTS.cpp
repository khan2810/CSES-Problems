#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m,k;
	cin>>n>>m>>k;
	int des[n],a[m];
	for(int i=0;i<n;i++)
	cin>>des[i];
	for(int i=0;i<m;i++)
	cin>>a[i];
	
	sort(des,des+n);
	sort(a,a+m);
	
	int flag=0,j;
	for(int i=0;i<m;i++)
	{
	    if(a[i]>=des[0]-k)
	    {
	        flag=1;
	        j=i;
	        break;
	    }
	}
	if(flag==0)
	    cout<<"0"<<endl;
	else
	{
	    int i=0,ans=0;
	    while(i<n&&j<m)
	    {
	        if(abs(des[i]-a[j])>k && des[i]<a[j])
	        {
	            i++;
	        }
	        else if(abs(des[i]-a[j])>k && des[i]>a[j])
	        {
	            j++;
	        }
	        else
	        {
	            i++;
	            j++;
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
