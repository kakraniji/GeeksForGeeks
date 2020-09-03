#include<bits/stdc++.h>
#define int long long
using namespace std;

/*
first approach is o(n2) solution:

second approach is o(n) solution:

*/


bool issorted(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		return false;
	}
	return true;
}

