class Solution{
public:	

void solve(int ones,int zeroes,int n,string ans,vector<string>&v)
{
    if(n==0)
    {
        v.push_back(ans);
        return;
    }
    solve(ones+1,zeroes,n-1,ans+"1",v);
    if(ones>zeroes)
    solve(ones,zeroes+1,n-1,ans+"0",v);
}
	vector<string> NBitBinary(int N)
	{
	    vector<string>v;
	    int ones=0;
	    int zeroes=0;
	    
	    string ans="";
	    
	    solve(ones,zeroes,N,ans,v);
	    return v;
	} 
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends
