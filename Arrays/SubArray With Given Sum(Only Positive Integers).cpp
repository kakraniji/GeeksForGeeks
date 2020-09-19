//note that the array contains only positive integers!!

//o(n2) solution containing all the subarrays!! and check anysubarray exist with given sum !!
//if exist then give the position !!
for(int i=0;i<n;i++)
	    {
	       int cur=0;
	        for(int j=i;j<n;j++)
	        {
	            cur=cur+a[j];
	            if(cur==sum)
	            {
	                c++;
	                cout<<i+1<<" "<<j+1<<endl;
	                break;
	            }
	        }
	        if(c!=0)
	        break;
	      }
	    if(c==0)
	    cout<<-1<<endl;
	   
//  efficient solution using sliding window technique!!

while(t--)
	{
	    int n,sum;
	    cin>>n>>sum;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int c=0;
	    
	    int csum=0;
	    int start=0;
	    for(int i=0;i<n;i++)
	    {
	        csum=csum+a[i];
	        while(csum>sum)
	        {
	            csum=csum-a[start];
	            start++;
	        }
	        if(csum==sum)
	        {
	            cout<<start+1<<" "<<i+1<<endl;
	            c++;
	            break;
	        }
	        
	   }
	   if(c==0)
	   cout<<-1<<endl;
	    
	}
