int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int cnt=0;
        int mx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                cnt++;
                mx=max(mx,cnt);
                
            }
            else
                cnt=0;
        }
        if(mx==0)
        return 0;
        else
            return mx;
    }
