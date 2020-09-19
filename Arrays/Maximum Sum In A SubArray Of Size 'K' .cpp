//maximum sum in a subarray of size'k'!!

//brute force solution!!

int maxSum(int arr[],int n,int k)
{
	int res=INT_MIN;
	for(int i=0;i<=n-k;i++)
	{
		int sum=0;
		for(int j=i;j<i+k;j++)
		{
			sum=sum+a[j];
		}
		res=max(res,sum);
	}
	return res;
}


//o(n) solution!! using sliding window technique!! aage walajodo peeche wala nikalo!!

int maxSum(int arr[],int n,int k)
{
	int sum=0;
	for(int i=0;i<k;i++)
	sum=sum+a[i];
	
	int res=sum;
	
	for(int i=k;i<n;i++)
	{
		sum=sum+a[i]-a[i-k];
		res=max(res,sum);
	}
	return res;
}
//we can also check anysubarray with size k and given sum exist in the array or not??
