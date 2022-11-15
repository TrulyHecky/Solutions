// Program to multiply a number with 3.5

#include <iostream>
using namespace std;
 
int multiplyWith3Point5 (int x)
{
    return (x << 1) + x + (x >> 1);
}

int main ()
{
    int x = 4;
    cout << " "<< multiplyWith3Point5(x);
    getchar();
    return 0;
}
