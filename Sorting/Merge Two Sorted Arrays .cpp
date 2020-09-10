#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int m,int b[],int n)
{
	int i=0,j=0,k=0;
	
	int temp[m+n];
	
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			temp[k]=a[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=b[j];
			k++;
			j++;
			
		}
	}
	while(i<m)
		temp[k++]=a[i++];
		
	while(j<m)
		temp[k++]=b[j++];
	
	for(int i=0;i<m+n;i++)
	cout<<temp[i]<<" ";

}
int main()
{
	int m;
	cin>>m;
	int a[m];
	for(int i=0;i<m;i++)
	cin>>a[i];
	
	int n;
	cin>>n;
	int b[n];
	for(int i=0;i<n;i++)
	cin>>b[i];
	
	merge(a,m,b,n);
}
