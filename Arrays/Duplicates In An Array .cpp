#include<bits/stdc++.h>
#define int long long 
using namespace std;
/*

1.first approach is using o(n2) solution !!

time complexity :o(n2)
space complexity:o(n)

2.second approach is using sorting !!!

time complexity:o(nlogn)
space complexity:o(n)

3.third approach is using frequency array!!

time complexity:o(n)
space complexity:o(n)

 4. using o(1) space and o(n) time!! 

time complexity:o(n)
space complexity:o(1)

*/ 
vector<int> duplicates(int a[], int n) {
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        a[a[i]%n]+=n;
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]/n>=2)
        {
            c++;
        v.push_back(i);
        }
    }
    if(c==0)
    v.push_back(-1);
    return v;
     
}
