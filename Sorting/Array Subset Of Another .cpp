
//this code is valid when the elements in both the arrays are distinct !!!
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;
        unordered_set<int>s;
        
        for(int i=0;i<n1;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        int a[n2];
        for(int i=0;i<n2;i++)
        cin>>a[i];
        int c=0;
        for(int i=0;i<n2;i++)
        {
            if(s.find(a[i])==s.end())
            {
                c++;
                break;
                
            }
        }
        if(c==0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
        
        
    }
	return 0;
}

//but when there is a duplicacy we have to use the two pointer approach !!!
//first we have to sort the both arrays!!
bool check(int A[],int m,int B[],int n)
{
	int i=0;
	int j=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			i++;
		}
		else
		{
			if(a[i]>b[j])
			{
				return -1;
			}
			else
			{
				i++;j++;
			}
			
		}
		
		
	}
	if(i==m)
	return false
	if(j==n)
	return true;
}



