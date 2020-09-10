//first Solution Brute Force Approach !!

void Intersection(int a[],int m,int b[],int n)
{
for(int i=0;i<m;i++)
{   
    //this statement is only used for avoiding duplicacy from the first array!! 
	if(i>0 && a[i]==a[i-1])
	continue;
	
	for(int j=0;j<n;j++)
	{
		if(a[i]==b[j])
		{
			cout<<a[i]<<" ";
			break;
		}
	}
	
}
}

// second approach using merge function !!

void Intersection(int a[],int m,int b[],int n)
{
	int i=0;
	int j=0;
	vector<int>v;
	
	while(i<m && j<n)
	{
		if(i>0 && a[i]==a[i-1])
		{
			i++;
			continue;
		}
		if(a[i]<b[j])
		i++;
		else if(a[i]>b[j])
		j++;
		else
		{
			v.push_back(a[i]);
			i++;
			j++;
		}
		
	}
}


