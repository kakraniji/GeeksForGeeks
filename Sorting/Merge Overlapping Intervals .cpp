#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		//pairs of Integers!!
		pair<int,int>p[n];
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			p[i]=make_pair(x,y);
		}
		sort(p,p+n);
		int res=0;
		for(int i=1;i<n;i++)
		{
			if(p[res].second>=p[i].first)
			{
				p[res].first=min(p[res].first,p[i].first);
				p[res].second=max(p[res].second,p[i].second);
				
			}
			else
			{
				res++;
				p[res]=p[i];
			}
		}
		for(int i=0;i<=res;i++)
		{
			cout<<p[i].first<<" "<<p[i].second<<" ";
		}
		cout<<endl;
	}
	
}
