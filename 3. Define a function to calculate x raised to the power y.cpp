#include<iostream>
#include<math.h>
long long int power(int,int);
using namespace std;
int main()
{
    cout<<"enter a number :- ";
    int x,y;
    cin>>x;
    cout<<"enter it's power :- ";
    cin>>y;
    cout<<"X^y = "<<power(x,y);
    return 0;
}
long long int power(int x,int y)
{
    long long int z=pow(x,y);
    return z;
}