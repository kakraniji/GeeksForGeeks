vector<int> threeWayPartition(vector<int> A, int a, int b)
{
    
    int low=0;
    int high=A.size()-1;
    int mid=0;
    
    while(mid<=high)
    {
        if(A[mid]<a)
        {
            swap(A[low],A[mid]);
            low++;
            mid++;
        }
        else if (A[mid]>=a && A[mid]<=b){
            mid++;
        }
        
        else
        {
            swap(A[mid],A[high]);
            high--;
            
        }
    }
    return A;
    
    
}
