#include <iostream>

using namespace std;

int main()
{
    double target;
    int cards;
    while ( cin >> target ) {
        if ( target == 0.00 ) break;
    	double sum = 0;
        cards = 0;
        while ( sum < target ) {
            cards++;
            sum += 1.0 / ( (double)cards + 1.0 );
        }
        cout << cards << " " << "card(s)" << endl;
    }
    return 0;
}