#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <iostream>

#define MAX_INT 2147483647

int len, num;

using namespace std;

int main ()
{
	scanf ( "%d %d", &len, &num );
	vector< string > DNAStringVec ( num );
	vector< int > unsortedVec ( num );
	for (int i = 0; i < num; ++i)
	{
		string tmp;
		cin >> tmp;
		DNAStringVec[ i ] = tmp;
		int unsortedNum = 0;
		for ( int i = 0; i < tmp.length(); ++i )
		{
			for ( int j = i + 1; j < tmp.length(); ++j )
			{
				if ( tmp[ i ] > tmp[ j ] )
				{
					unsortedNum++;
				}
			}
		}
		unsortedVec[ i ] = unsortedNum;
	}

	for ( int i = 0; i < num; ++i )
	{
		int minUnsorted = MAX_INT;
		int minIndex = 0;
		for ( int index = 0; index < num - i; ++index )
		{
			if ( minUnsorted > unsortedVec[ index ] )
			{
				minUnsorted = unsortedVec[ index ];
				minIndex = index;
			}
		}
		cout << DNAStringVec[ minIndex ] << endl;
		unsortedVec.erase( unsortedVec.begin() + minIndex );
		DNAStringVec.erase( DNAStringVec.begin() + minIndex );
	}
}