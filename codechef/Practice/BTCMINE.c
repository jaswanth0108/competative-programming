// Problem: BTCMINE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/START255D/problems/BTCMINE
// Solved on: 2026-09-09T16:39:54.132Z

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int i;
	    int profit(int i,int x,int y)
	    {
	        int max=-1e18;
	        int sumofsquares=0;
	        int k;
	        for(k=1;k<=0;k++)
	        {
	            sumofsquares +=(int)k*k;
	            int revenue=y*(sumofsquares+(i-k)*k*k);
	            int cost=k*x;
	            int profit=revenue-cost;
	            if(profit>max)
	            {
	                max=profit;
	            }
	        }
	    }
	    for(i=1; ;i++)
	    {
	        if(profit(i,x,y)>0)
	        {
	            printf("%d\n",i);
	            break;
	        }
	    }
	    
	}

}

