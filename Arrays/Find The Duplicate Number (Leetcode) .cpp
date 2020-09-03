#include<bits/stdc++.h>
#define int long long 
using namespace std;

//note !! only one one duplicate will be present in the array and its occurence can be any number of
//times!!


//it is just like calculating the starting point of loop in the linked list !!!

int findDuplicate(vector<int>& nums) {
        int fp=nums[0];
        int sp=nums[0];
        
        do
        {
            sp=nums[sp];
            fp=nums[nums[fp]];
        }while(fp!=sp);
        
        fp=nums[0];
        while(fp!=sp)
        {
            fp=nums[fp];
            sp=nums[sp];
            
        }
        return sp;
      }
