//first approach o(n2) solution !!

//this will return the first index of the majority element in the array !!
int findMajority(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int cnt=1;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			cnt++;
		}
		if(cnt>n/2)
		return i;
	}
	return -1;
}

//o(n) so=lution !! 

//note: By an index i if an element x is considered as majority then it is the only element which 
//is considered as a majority !!

//the element which is not in majority cancel the vote of others!!

int findMajority(int arr[],int n)
{
	//first element ko hi majority element man lia he !! and uska count 1 kar dia he !!
	int cnt =1;
	int res=0;
	for(int i=1;i<n;i++)
	{
		if(arr[res]==arr[i])
			cnt++;
		else                //find a candidate !
		cnt--;
		if(cnt==0)
		{
			res=i;
			cnt=1;
		}
	}
	
	cnt=0;
	for(int i=0;i<n;i++)
  {
	if(arr[res]=arr[i])  //finds that a calculated candidate is actually a majority element or not
         cnt++;
		
	}
	if(cnt>=n/2)
	return res;
	
	return -1;
}
