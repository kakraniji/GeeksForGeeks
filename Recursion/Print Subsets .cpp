#include<bits/stdc++.h>
using namespace std;

void solve(string s,string ans)
{
	if(s.size()==0)
	{
		cout<<ans<<" ";
		return ;
	}
	//first character alag kar lia!!
	char ch=s[0];
	//rest of the question(string) alag kar li !!!
	string roq=s.substr(1);
	
	solve(roq,ans+ch);
	solve(roq,ans);
}
int main()
{
	string s="abc";
	
	solve(s,"");
}

//store karana ho to store bi kara sakte ho vector me dalke ..

//vector globally bana do..
//vector pass by reference access karte jao..
