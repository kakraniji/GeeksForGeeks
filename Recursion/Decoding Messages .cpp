#include <iostream>
using namespace std;

int c=0;
void solve(string s,string ans)
{
    if(s.size()==0)
    {
        c++;
        return;
    }
    else if (s.size()==1)
    {
        char ch=s[0];
        if(ch=='0')
        return;
        else
        {
            int chv=ch-'0';
            char code=(char)('a'+chv-1);
            ans=ans+code;
            c++;
        }
    }
    else
    {
        char ch=s[0];
        string roq=s.substr(1);
        if(ch=='0')
        return;
        
        else
        {
            int chv=ch-'0';
            char code=(char)('a'+chv-1);
            solve(roq,ans+code);
        }
        
        string ch12=s.substr(0,2);
        string roq12=s.substr(2);
        
        int ch12v=stoi(ch12);
        
        if(ch12v<=26)
        {
            char code=(char)('a'+ch12v-1);
            solve(roq12,ans+code);
        }
        
        
    }
}
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(s,"");
        cout<<c<<endl;
        c=0;
        
    }
	return 0;
}
