#include <iostream>
#include <stdio.h>
using namespace std;
/*Don't mind
I say
    lol*/ 
int x;
int y;

namespace minefunc {
    void func()
    {
        cout <<"Fuck ";
    }
}
namespace tf {
    void em()
    {
        cout << "you!" << endl;
    }
}
int main()
{
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    auto sum = x + y;
    sum += 7;
    cout <<x + y<< endl;
    cout <<sum<<endl;
    system("pause");
    return 0;
}
