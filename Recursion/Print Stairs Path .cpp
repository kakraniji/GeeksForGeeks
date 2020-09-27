#include<bits/stdc++.h>

using namespace std;

void printStairsPath(int n,string ans)
{
	if(n<0)
	return;
	
	if(n==0)
	{
		cout<<ans<<endl;
		return;
	}
	printStairsPath(n-1,ans+"1");
	printStairsPath(n-2,ans+"2");
	printStairsPath(n-3,ans+"3");
}
int main()
{
	int n=4;
	printStairsPath(n,"");
}
