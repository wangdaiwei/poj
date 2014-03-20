#include <stdio.h>
#include <math.h>

int main() 
{
	int p, e, i, d;
	int caseCount = 1;
	while ( scanf( "%d %d %d %d", &p, &e, &i, &d ) )
	{
		if ( p == -1 && e == -1 && i == -1 && d == -1 ) break;
		int pRemainder = p % 23;
		int eRemainder = e % 28;
		int iRemainder = i % 33;
		int target = d + 1;
		while ( target % 23 != pRemainder )
		{
			target++;
		}
		while ( target % 28 != eRemainder )
		{
			target += 23;
		}
		while ( target % 33 != iRemainder )
		{
			target += 23 * 28;
		}
		printf( "Case %d: the next triple peak occurs in %d days.\n", caseCount++, target - d );
	}
}