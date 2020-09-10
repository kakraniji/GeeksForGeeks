//isme pehle round me sabse bada element akhri me pahuchta he doosre round me doosra second last
//position par aa jata he !!!

void bubbleSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int c=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				c++;
				swap(arr[j],arr[j+1]);
			}
		}
		//now the array is sorted!! you can simply return !!
		if(c==0)
		break;
	}
}
