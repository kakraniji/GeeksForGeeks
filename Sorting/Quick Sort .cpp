#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int lb,int ub)
{
	int pivot=a[ub];
	
	int i=lb-1;
	
	//kyunki pivot to akhri ko hi mana he !! islie loop ub se ek kam hi chalana he!!
	//pivot se chote aur barabar left side me and bade right side me !!
	for(int j=lb;j<=ub-1;j++)
	{
		if(a[j]<pivot)
		{
			// chhote elements ki window badti jaygi !!
			i++;
			swap(a[i],a[j]);
		}
		
	}
	swap(a[i+1],a[ub]);
	return i+1;
}
void QuickSort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		//is call se pivot apni sahi jagah pe AA jayga [lb,ub] me aur ub ko hi pivot mante !!
		int loc=partition(a,lb,ub);
		QuickSort(a,lb,loc-1);
		QuickSort(a,loc+1,ub);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	QuickSort(a,0,n-1);
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
