void binSort(int A[], int N)
{
  int i=-1;
  int pivot=1;
  for(int j=0;j<N;j++)
  {
      if(A[j]<pivot)
      {
          i++;
          swap(A[i],A[j]);
      }
  }
}
