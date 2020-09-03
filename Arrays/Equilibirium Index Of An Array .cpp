//first Solution using o(n2) approach!!

//second solution using maintaining the left sum and right sum !!

int equilibiriumIndex(int arr[],int n)
{
	int lsum=0,tsum=0,c=0;
	for(int i=0;i<n;i++)
		tsum=tsum+arr[i];
	
	for(int i=0;i<n;i++)
	{
		int rsum=tsum-lsum-arr[i];
		if(rsum==lsum)
		{
			c++;
	        return i+1;
		}
		lsum=lsum+arr[i];
	}
	if(c==0)
	return -1;
}
