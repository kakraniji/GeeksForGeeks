//isme basically pehle round me sabse smaller element sabse pehli position par aa jata he !!

void selectionSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		swap(arr[i],arr[min]);
	}
}
