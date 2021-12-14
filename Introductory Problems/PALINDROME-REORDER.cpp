#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string str;
	cin>>str;
	map<char,int>mp;
	for(int i=0;i<str.length();i++)
	mp[str[i]]++;
	
	int oddchar=0,oddnum;
	char oddch;
	for(auto x:mp)
	{
	    if(x.second%2==1)
	    {
	       oddchar++;
	       oddch=x.first;
	       oddnum=x.second;
	    }
	}
	if(oddchar>1)
	cout<<"NO SOLUTION";
	else
	{
	    string s1="",s2="";
	    for(auto x:mp)
	    {
	        if(x.first==oddch)
	        continue;
	        string temp(x.second/2 , x.first);
	        s1=s1+temp;
	        s2=temp+s2;
	    }
	    if(oddchar==1)
	    {
	        string sodd(oddnum,oddch);
	        cout<<s1+sodd+s2;
	    }
	    else
	    cout<<s1+s2;
	}
     return 0;
}
