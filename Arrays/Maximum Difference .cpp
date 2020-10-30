int maxDifference(int arr[],int n)
{
	int res=arr[1]-arr[0];
	for(int i=0;i<n;i++
	{
		for(int j=i+1;j<n;j++)
		{
			res=max(res,arr[j]-arr[i]);
		}
	}
	return res;
}

//second approach is:


//Note: i ka loop chalane ki jaroorat nahi h !! direct j ka loop chalao (arr[j]-arr[i]) ye jab hi max
//aa sakta he jab arr[j] me se minimumvalue hi subtract ho rahi ho !!

int maxDifference(int [] arr,int n)
{
	int res=arr[1]-arr[0];
	int minvalue=arr[0];
	
	for(int j=1;j<n;j++)
	{
		res=max(res,arr[j]-minvalue);
		minvalue=min(minvalue,arr[j]);
	}
	return res;
}
