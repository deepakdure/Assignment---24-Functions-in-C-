#include <iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    cout << "enter two numbers" << endl;
    int a, b;
    cin >> a >> b;
    cout << "before swapping" << endl
         << "a = " << a << endl
         << "b = " << b << endl;
    swap(a, b);
    cout << "after swapping" << endl
         << "a = " << a << endl
         << "b = " << b;
    return 0;
}
void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}