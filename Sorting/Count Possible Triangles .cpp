#include<bits/stdc++.h>
using namespace std;


//brute force: 
int countPossibleTriangles(int a[],int n)
{
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(a[i]+a[j]>a[k] && a[j]+a[k]>a[i] && a[i]+a[j]>a[k])
			c++;
		}
	}
}
return c;
}

//optimal solution using SORTING !!!

int countPossibleTriangles(int a[],int n)
{
	sort(a,a+n);
	count=0;
	for(int i=0;i<n;i++)
	{
		int k=i+2;
		for(int j=i+1;j<n;j++)
		{
			while(k<n && a[i]+a[j]>a[k])
			k++;
			
			count+=k-j-1;
			
		}
	}
	return count;
}
