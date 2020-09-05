//basic o(n2) solution !!

int maxEvenOdd(int arr[], int n) 
{ 
    int res=1;
   for(int i=0;i<n;i++)
   {
       int cur=1;
       for(int j=i+1;j<n;j++)
       {
          if((arr[j]%2==0 && arr[j-1]%2!=0)||(arr[j]%2!=0 && arr[j-1]%2==0))
           cur++;
           //agar else execute hota he !! to us current i ke lie age chalane ki jarurat nahi he !!
           else
           break;
       }
       res=max(res,cur);
   }
   return res;
} 

//efficient o(n) solution !!!

int maxEvenOdd(int arr[], int n) 
{ 
    int res=1;
    int cur=1;
 //alternating even odd mil rahe he to cur badate jao else cur ke andar 1 daldo!    
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
        {
            cur++;
            res=max(res,cur);
        }
        //jese hi cur 1 hoga that means naya subarray start ho chuka he !!
        else
        cur=1;
    }
    return res;
}
