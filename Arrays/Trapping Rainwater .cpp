//note:kisi bi building par pani barega=us building ke left me maximum us building ke right me maximum 
//ka minimum:  arr[i] par pani=min(lmax,rmax)-arr[i]

//First approch is o(n2) solution !!

int getWater(int a[],int n)
{
	int water=0;
	//0th building par and nth building par pani to jama hoga hi nahi !!
   for(int i=1;i<n-1;i++)
	{
		 int lmax=a[0];
		  //0th index se lekar current building tak me sabse badi height ki building !!   
		 for(int j=1;j<=i;j++)
		 lmax=max(lmax,a[j]);
		 
		 int rmax=a[i];
		  //current building se lekar (n-1)th building tak me sabse badi height ki building!  
		  for(int j=i+1;j<n;j++)
		   rmax=max(rmax,a[j]);
		    
		  water+=min(lmax,rmax)-a[i];
		   
		}
}


//note:instead of calculating lmax,rmax for each bar each time we can compute the preprocessed lmax,
//rmax array !!

int getWater(int a[],int n)
{
  int lmax[n];
  int rmax[n];
  int res=0;
  lmax[0]=arr[0];
  
  for(int i=1;i<n;i++)
  lmax[i]=max(lmax[i-1],arr[i]);
  
  rmax[n-1]=arr[n-1];
  
  for(int i=n-2;i>=0;i--)
  rmax[i]=max(rmax[i+1],arr[i]);
  
  for(int i=1;i<n-1;i++)
  {
      res=res+min(lmax[i],rmax[i])-arr[i];
      
  }
  return res;
	
}
