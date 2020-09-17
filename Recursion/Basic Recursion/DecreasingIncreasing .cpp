#include<bits/stdc++.h>

using namespace std;

void printDI(int n)
{
	if(n==0)
	return;
	cout<<n<<endl;
	printDI(n-1);
	cout<<n<<endl;
	
}
int main()
{
	int n;
	cin>>n;
	printDI(n);
}
