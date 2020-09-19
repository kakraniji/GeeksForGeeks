//stock buy and sell problem !!

//naive approach o(n2) solution !!

//constraints:jis din khareedo aur usi din bechoge to koi profit nahi hoga !! and kharidne wala din
//chhota hoga bechne wale din se !!
 
int maxProfit(int price[],int start,int end)
{
	
	if(start>=end)
	return 0;
	int profit=0;
	
	for(int i=start,i<end;i++)
	{
		for(int j=i+1;j<=end;j++)
		{
			if(price[j]>price[i])
			{
				int cur_profit=price[j]-price[i]+maxProfit(price,start,i-1)+maxProfit(price,j+1,end);
				
				profit=max(profit,cur_profit);
			}
		}
	}
	return profit;
}

//better solution !! o(n) time !!

//jis din price badi us din bech do yahi approach he second solution ki!!

int maxProfit(int price[],int n)
{
	int profit=0;
	for(int i=1;i<n;i++)
	{
		if(price[i]>price[i-1])
		profit+=price[i]-price[i-1];
		
	}
	return profit;
}
