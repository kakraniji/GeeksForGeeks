
//first approach is to call leftrotatebyone() d times !!

 //second approach is using auxiliary space of o(d) and time complexity is o(n)!!
 
 //third approach is by reversing method!!

void leftRotateBydPlaces(int a[],int n,int d)
{
	//reverse upto d places!
	reverse(a,0,d-1);
	//reverse from dth place to th end of the array !!
	reverse(a,d,n-1);
	//reverse the whole array !!
	reverse(a,0,n-1);
	
}
void reverse(int a[],int l,int u)
{
	while(l<=u)
	{
		swap(a[l],a[u]);
		l++;
		u--;
	}
	
}
