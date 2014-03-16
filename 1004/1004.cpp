#include <iostream>

using namespace std;

int main()
{
    double tmp, sum;
    sum = 0.0f;
    for ( int i = 0; i < 12; i++ ) {
    	cin >> tmp;
    	sum += tmp;
    }
    double average = sum / 12;
    cout.setf(ios::fixed, ios::floatfield); 
    cout.precision(2); 
    cout << "$" << average << endl;
    return 0;
}