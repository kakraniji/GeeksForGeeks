
//isme har iteration me utta part sort hota chala jata he !!! jaha par arr[j] chhota ho jata he key se
//wha tak apn ko part sorted milta he and apan break kar dete he !!

void InsertionSort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
