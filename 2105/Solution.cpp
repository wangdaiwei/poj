#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int N;
	int convertedArray[] = { 128, 64, 32, 16, 8, 4, 2, 1 };
	string rawIP;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> rawIP;
		int convertedIP[] = { 0, 0, 0, 0 };
		for (int index = 31; index >= 0; --index)
		{
			if ( rawIP[ index ] == '1' ) 
			{
				convertedIP[ index / 8  ] += convertedArray[ index % 8 ];
			}
		}

		for (int num = 0; num < 4; ++num)
		{
			cout << convertedIP[num];
			if ( num != 3 )
			{
				cout << ".";
			}
		}
		cout << endl;
	}
}