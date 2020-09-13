int maxGuest(int arr[],int dep[])
{
	//hamesha esa hoga ki arr[0] dep[0] se chhota he hoga ek bande se milna to teh he !!
	int i=1;
	
	int j=0; //koi gaya nahi h abi !!
	
	int res=1,cur=1;
	//res ye batayage ki me maximum kitte bando se mil chuka hoon!!
	
	while(i<n && j<n)
	{
		if(arr[i]<=dep[j])
		{
			cur++;
			i++;
			
		}
		else
		{
			cur--;
			j++;
		}
		res=max(res,cur);
	}
	return res;
	
	
}
