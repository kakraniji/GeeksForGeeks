#include <bits/stdc++.h>
using namespace std;

char uppercase(char ch)
{
    ch=ch-32;
    return ch;
}
void solve(string s,string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch=s[0];
    string roq=s.substr(1);
    
    solve(roq,ans+uppercase(ch));
    solve(roq,ans+ch);
}
int main() {
	
	    string s;
	    cin>>s;
	    
	    solve(s,"");
}
