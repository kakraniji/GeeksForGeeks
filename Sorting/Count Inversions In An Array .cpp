#include<bits/stdc++.h>
#define int long long
using namespace std;

int merge(int a[],int lb,int ub)
{
	int mid=(lb+ub)/2;
	int i=lb;
	int j=mid+1;
	int k=0;
	int temp[ub-lb+1];
	
	int inv=0;
	
	while(i<=mid && j<=ub)
	{
		// a[i] bada hona chaiye pair me equal bi nahi chalega !!
		if(a[i]<=a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
		else
		{
			inv+=mid-i+1;
			temp[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		temp[k]=a[i];
		i++;
		k++;
	}
	while(j<=ub)
	{
		temp[k]=a[j];
		j++;
		k++;
	}
	int x=0;
	for(int i=lb;i<=ub;i++)
	{
		a[i]=temp[x];
		x++;
	}
	return inv;
}

int mergeSort(int a[],int lb,int ub)
{
	int count=0;
	
	if(lb<ub)
	{
	
	int mid=(lb+ub)/2;
	
	count+=mergeSort(a,lb,mid);
	
	count+=mergeSort(a,mid+1,ub);
	
	count+=merge(a,lb,ub);
	}
	
	return count;
	
}
int32_t main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<mergeSort(a,0,n-1);
}
