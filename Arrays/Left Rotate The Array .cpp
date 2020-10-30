void leftRotateByOne(int a[],int n)
{
	int temp=a[0];
	for(int i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=temp;
}
