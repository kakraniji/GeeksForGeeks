bool canThreePartsEqualSum(vector<int>& A) {
        int sum=0;
        for(int i=0;i<A.size();i++)
            sum=sum+A[i];
        if(sum%3!=0)
            return false;
        
        int partition=0;
        int ideal=sum/3;
        sum=0;
        for(int i=0;i<A.size();i++)
        {
            sum=sum+A[i];
            if(sum==ideal)
            {
                partition++;
                sum=0;
            }
            
        }
        if(partition>=3)
            return true;
        return false;
    }
