#include<bits/stdc++.h>

using namespace std;

//sr-- source row
//sc-- source column
//dr-- destination row
//dc-->destination col.
 
void printMazePath(int sr,int sc,int dr,int dc,string ans)
{
	if(sr>dr || sc>dc)
	return;
	
	if(sr==dr && sc==dc)
	{
		cout<<ans<<endl;
		return;
	}
	printMazePath(sr,sc+1,dr,dc,ans+"H");
	printMazePath(sr+1,sc,dr,dc,ans+"V");
}
int main()
{
	
	int n,m;
	cin>>n>>m;
	printMazePath(1,1,n,m);
}
