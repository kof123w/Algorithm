#include "Iteration\IterationLib.cpp"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    IterationLib fibonacci;
    int an = fibonacci.Fbnci(5);
    cout << an << endl;
    return 0;
}
