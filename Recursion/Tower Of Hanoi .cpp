#include<bits/stdc++.h>
using namespace std;

void toh(int n,char src,char dest,char help)
{
    if(n==1)
    {
    cout<<"move "<<n<<" th disk from "<<src<<" to"<<dest<<endl;
    return;
    }
    
    toh(n-1,src,help,dest);
    cout<<"move "<<n<<" th disk from "<<src<<" to"<<dest<<endl;
    toh(n-1,help,dest,src);
}

int main()
{
    int n;
    cin>>n;
    toh(n,'A','C','B');
}
