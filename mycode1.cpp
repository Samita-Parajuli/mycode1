#include <iostream>
using namespace std;

int foo(int  y)
{
    y--;
    return y;
}

int main()
{
    int x = 9;
    const int z = 10;
    cout << foo(x) << '\n'
        << foo(z);

    return 0;
}

//Output will be 8 9.
//New lline added in code to commit.