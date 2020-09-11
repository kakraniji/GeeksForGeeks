#include<bits/stdc++.h>
using namespace std;
//first way is to use the sorting directly !!

int partition(int a[],int lb,int ub)
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
	return i+1;
	
}
int kthSmallest(int a[],int n,int k)
{
	int l=0;
	int u=n-1;
	while(l<=u)
	{
		int p=partition(a,l,u);
		if(p==k-1)
			return p;
		else if(p>k-1)
		u=p-1;
		else
		l=p+1;
	}
	return -1;
}
int main()
{
	 int n;
	 cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++)
	 cin>>a[i];
	 int k;
	 cin>>k;
	 int idx=kthSmallest(a,n,k);
	 if(idx!=-1)
	 cout<<a[idx];
	 else
	 cout<<"not present in the array";
}
