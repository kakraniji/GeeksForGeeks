 #include<bits/stdc++.h>
 
 using namespace std;
 
 void josephus(int k,int idx,vector<int>&v)
 {
     if(v.size()==1)
     {
         cout<<v[0]+1<<" ";
         return;
     }
     idx=(idx+k)%v.size();
     v.erase(v.begin()+idx);
     josephus(k,idx,v);
     
}
 
 int main()
 {
     int n,k;
     cin>>n>>k;
     vector<int>v(n);
     
     for(int i=0;i<n;i++)
     v[i]=i;
     
     josephus(k-1,0,v);
    
 }
