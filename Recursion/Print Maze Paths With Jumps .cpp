#include<bits/stdc++.h>

using namespace std;

//sr-- source row
//sc-- source column
//dr-- destination row
//dc-->destination col.
 
void printMazePath(int sr,int sc,int dr,int dc,string ans)
{
	//isme bahar nikalne wala case handle karne ki jarurat nahi he !!! apn ne calls smartly 
	//lagayi he!!
	if(sr==dr && sc==dc)
	{
		cout<<ans<<endl;
		return;
	}
	//ms==>movesize
	for(int ms=1;ms<=dc-sc;ms++)
	printMazePath(sr,sc+ms,dr,dc,ans+"H"+to_string(ms));
	
	for(int ms=1;ms<=dr-sr;ms++)
	printMazePath(sr+ms,sc,dr,dc,ans+"V"+to_string(ms));
	
	for(int ms=1;ms<=dc-sc && ms<=dr-sr;ms++)
	printMazePath(sr+ms,sc+ms,dr,dc,ans+"D"+to_string(ms));
}
int main()
{
	
	int n,m;
	cin>>n>>m;
	printMazePath(1,1,n,m,"");
}
