#include<iostream>
using namespace std;
int HighestDigit(int);
int main()
{
    cout<<"enter a number = ";
    int x;
    cin>>x;
    cout<<"highest digit value is = "<<HighestDigit(x);
    return 0;
}
int HighestDigit(int x)
{
    int max=-10000,y;
    while(x!=0)
    {
        y=x%10;
        if(max<y)
        {
            max=y;
        }
        x=x/10;
    }
    return max;
}