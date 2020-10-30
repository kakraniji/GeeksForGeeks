void reverse(int a[],int n)
{
	int l=0;
	int u=n-1;
	while(l<u)
	{
		swap(a[l],a[u]);
		l++;
		u--;
	}
}
