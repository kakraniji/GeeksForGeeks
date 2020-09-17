#include<bits/stdc++.h>

using namespace std;

int pow(int a,int b)
{
	if(b==0)
	return 1;
	
	int smallans=pow(a,b/2);
	smallans=smallans*smallans;
	if(b&1) //check if b is odd or not !!
	return a*smallans;
	return smallans;
	
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<pow(a,b);
}
