#include<iostream>
void fun(int);
using namespace std;
int main()
{
    cout<<"enter a number = ";
    int x;
    cin>>x;
    fun (x);
    return 0;
}
void fun(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0&&i!=x)
        {
            cout<<"Not prime";
            break;
        }
    }
    if(x==i)
    cout<<"Prime";
}
