//maximum circular subarray sum!!

//do choices he ya to contiguous subarray milega(maximum) ya phir koi circular subarray hoga !! 

int kadanes(int arr[],int n)
{
    int res=arr[0];
    int maxEnding=arr[0];
    
    for(int i=1;i<n;i++)
    {
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(maxEnding,res);
        
    }
    return res;
}
int circularSubarraySum(int arr[], int num){
    
    //normal kadanes lagayi array par !!
    int x=kadanes(arr,num);
    int y=0;
    for(int i=0;i<num;i++)
    {
        y=y+arr[i];
        arr[i]=arr[i]*-1;
    }
    //array ke sare elements ko negative karkar dobara kadanes lagayi !! aur uska negative karkar 
    //total sum me se minus kar dia !!
    int z=kadanes(arr,num);
    //[-3,-2,-1] x=-1 ,y=-6 ,z=6 //it will return 0 but answer should be -1
    if(y+z==0)
    return x;
    return max(x,y+z);
    
}
