#include <iostream>
int add(int, int, int = 0);
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three numbers" << endl;
    cin >> a >> b >> c;
    cout << a << "+" << b << "+" << c << "+ = " << add(a, b, c) << endl;
    cout << "**************************" << '\n';
    cout << "enter 2 numbers" << endl;
    cin >> a >> b;
    cout << a << "+" << b << "+ = " << add(a, b);
    return 0;
}
int add(int a, int b, int c)
{
    return a + b + c;
}