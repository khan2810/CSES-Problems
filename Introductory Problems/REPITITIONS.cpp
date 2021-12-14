#include <iostream>
using namespace std;

int main() {
	// your code goes here
    string str;
    cin>>str;
    
    int count=1,max=1;
    for(int i=1;i<str.length();i++)
    {
       if(str[i]==str[i-1])
       {
           count++;
           if(count>max)
           {
              max=count;
           }
       }
       else
       count=1;
    }
    cout<<max;
    return 0;
}
