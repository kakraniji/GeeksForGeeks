#include<bits/stdc++.h>

using namespace std;

//we are not printing here but we are returning the size of array!! in which all the occurences 
//of a number will exist!!

int allOcc(int a[],int i,int n,int j,int key,int op[])
{
	if(i==n)
	return j;
	
	if(a[i]==key)
	{
		op[j]=i;
		return allOcc(a,i+1,n,j+1,key,op);
		
	}
	return allOcc(a,i+1,n,j,key,op);
	
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int key;
	cin>>key;
	
	int output[100];
	
	int k=allOcc(a,0,n,0,key,output);
	
	for(int i=0;i<k;i++)
	cout<<output[i]<<" ";
	
	
}
