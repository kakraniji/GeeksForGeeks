//first approach is using o(n2) solution !!


//second approach is o(n) solution !!

vector<int> leaders(int arr[], int n){
    
    vector<int>v;
    //right wala to leader hona hi he !!
    int max=arr[n-1];
    v.push_back(max);
    
    for(int i=n-2;i>=0;i--)
    {
    	//kisi bi point of time par agar arr[i] max se bada he matlab right me sab usse hi pade he !!
        if(arr[i]>=max)
        {
        max=arr[i];
        v.push_back(arr[i]);
        }
    
    }
    reverse(v.begin(),v.end());
    return v;
    
}
