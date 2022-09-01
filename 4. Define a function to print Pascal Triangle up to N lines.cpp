#include<iostream>
int Factorial(int);
int Combination(int, int);
void Pascal_Triangle(int);
using namespace std;
int main()
{
    int n, r;
    cout<<"enter number of columns for pascal triangle = ";
    cin>>n;
    Factorial(n);
    Combination(n, r);
    Pascal_Triangle(n);
    return 0;
}
int Factorial(int a)
{
    int b = 1;
    while (a)
    {
        b = b * a;
        a--;
    }
    return b;
}
int Combination(int x, int y)
{
    return (Factorial(x) / Factorial(x - y) / Factorial(y));
}
void Pascal_Triangle(int x)
{
    int i, j, k;
    for (i = 1; i <= x; i++)
    {
        k = 1;
        int r = 0;
        for (j = 1; j <= 2 * x - 1; j++)
        {
            if (j >= x + 1 - i && j <= x - 1 + i && k)
            {
                cout<<" "<<Combination((i - 1), r);
                k = 0;
                r++;
            }
            else
            {
                cout<<"  ";
                k = 1;
            }
        }
        cout<<endl;
    }
}