int maxOccured(int L[], int R[], int n, int maxx){
    int arr[1000000]={0};
    for(int i=0;i<n;i++)
    {
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int maxvalue=arr[0];
    int res=0;
    for(int i=1;i<1000000;i++)
    {
        arr[i]=arr[i]+arr[i-1];
        if(arr[i]>maxvalue)
        {
            res=i;
            maxvalue=arr[i];
            
        }
    }
    return res;
}
