#include <bits/stdc++.h>
using namespace std;

void solve(string s,string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch=s[0];
    string roq=s.substr(1);
    
    solve(roq,ans+"-"+ch);
    solve(roq,ans+ch);
}
int main() {
	
	    string s;
	    cin>>s;
	    
	    char ch=s[0];
	    string roq=s.substr(1);
	    string ans="";
	    solve(roq,ans+ch);
	    return 0;
}
