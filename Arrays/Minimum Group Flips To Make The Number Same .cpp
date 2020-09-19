void printGroups(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		if(a[i]!=a[i-1])
		{
			if(a[i]!=a[0])
			{
				cout<<"from"<<i<<"to";
			}
			else
			cout<<i-1;
		}
		
	}
	if(arr[n-1]!=arr[0])
	cout<<n-1;
}
