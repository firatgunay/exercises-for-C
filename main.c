#include <stdio.h>
int main()
{

	int primeCheck=0,i,j,k,n;

	for (i=2; i<=100; i++)
	{
		for (j=2; j<i; j++)
		{
			if(i%j==0) primeCheck=1;
		}

		if (primeCheck == 1) // if i not prime
		{
			primeCheck = 0;
			printf("%d:", i);
			for (k=2; k<i; k++)
			{
				if(i % k == 0)
				{
					for(n = 2; n<k; n++)
					{
						if(k % n == 0) primeCheck=1;

					}
					if(primeCheck==0) printf(" %d ",k);
					primeCheck=0;
				}

			}
			primeCheck=0;
		}
		printf("\n");
	}
	return 0;

}
