//m size k pairs dekhne he and us pair me se maximum or minimum value ka difference minimum ana chaiye 

int maxDifference(int a[],int n,int m)
{
	if(m>n)
	return -1;
	sort(a,a+n);
	int res=arr[m-1]-arr[0];
	
	for(int i=0;i<=n-m+1;i++)
	{
		res=max(res,arr[m+i-1]-arr[i]);
		
	}
	return res;
}
