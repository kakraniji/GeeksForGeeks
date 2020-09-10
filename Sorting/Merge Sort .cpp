#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int lb,int ub)
{
	int temp[ub-lb+1];
	int mid=(lb+ub)/2;
	int i=lb;
	int j=mid+1;
	int k=0;
	while(i<=mid && j<=ub)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=a[j];
			j++;
			k++;
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
		k++;
		j++;
	}
	int x=0;
	for(int i=lb;i<=ub;i++)
	{
	a[i]=temp[x];
	x++;
   }	
	
}
void mergeSort(int a[],int lb,int ub)
{
	       if(lb<ub)
                {
                int mid=(lb+ub)/2;
		//recursively sort the left part!!
		mergeSort(a,lb,mid);
		//recursively sort the right part !!
		mergeSort(a,mid+1,ub);
		//merge both the parts !!
		merge(a,lb,ub);
	
              }
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
