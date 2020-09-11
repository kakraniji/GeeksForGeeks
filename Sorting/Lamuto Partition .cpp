#include<bits/stdc++.h>
using namespace std;

//this is the lamuto partition in which we are assuming the pivot element as last element of array.
void partition(int a[],int lb,int ub)
{
	int pivot=a[ub];
	
	int i=lb-1;
	
	for(int j=lb;j<=ub-1;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(a[i],a[j]);
		}
		
	}
	swap(a[i+1],a[ub]);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	partition(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
