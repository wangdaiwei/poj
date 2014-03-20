#include <stdio.h>
#include <math.h>

#define PI 3.141592653

int main() 
{
	int count;
	double x, y;
	scanf( "%d", &count );
	for (int i = 1; i <= count; ++i)
	{
		scanf( "%lf %lf", &x, &y );
		double maxRadiusSquare = x*x + y*y;
		int result = (int)ceil( maxRadiusSquare*PI / 100 );
		printf( "Property %d: This property will begin eroding in year %d.\n", i, result );
	}
	printf( "END OF OUTPUT.\n" );
}