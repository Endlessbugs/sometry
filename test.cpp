#include <iostream>
using namespace std;

int main() {
    //your code goes here
    int x;
    int y = 50;
    cout << "the number of passengers waiting in the bus station=";
    cin >> x;
    int n = x % y;
    if (n==0)
    {
        cout << "the empty seat of the last bus is 0 ." << endl;

    }
    else
    {
        n = y - n;
        cout << "the empty seat of the last bus is " << n << " ." << endl;
        
    }
    
}