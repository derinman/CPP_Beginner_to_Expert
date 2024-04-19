/**
 * Author:    Tridib Samanta
 * Created:   16.01.2020
 **/

#include <iostream>
using namespace std;

void swap1(int &, int &);
void swap2(int, int);

int main()
{

    int a = 10, b = 20;
    swap1(a, b);

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    int c = 30, d = 40;
    swap2(c, d);

    cout << "c : " << c << endl;
    cout << "d : " << d << endl;

    return 0;
}

void swap1(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}

void swap2(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
}