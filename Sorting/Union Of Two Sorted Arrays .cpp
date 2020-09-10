//brute force approach he !!

//array banalo m+n size ka or sort karkar distinct elements print karado array ke !!


//second approach !!

void Union(int a[],int n,int b[],int m)
{
	int i=0,j=0;
	vector<int>v;
	
	while(i<m && j<n)
	{
		if(i>0 && a[i-1]==a[i])
		{
			i++;
			continue;
		}
		if(j>0 && b[j-1]==b[j])
		{
			j++;
			continue;
		}
		if(a[i]<b[j])
		{
			v.push_back(a[i]);
			i++;
		}
		else if(a[i]>b[j])
		{
			v.push_back(b[j]);
			j++;
		}
		else
		{
			v.push_back(a[i]);
			i++;
			j++;
		}
	}
	while(i<m)
	{
		if(i==0 || a[i]!=a[i-1])
		v.push_back(a[i]);
		i++;
	}
	while(j<n)
	{
		if(j==0 || b[j]!=b[j-1])
		v.push_back(b[j]);
		j++;
	}
	
}
