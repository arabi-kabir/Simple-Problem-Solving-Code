#include <iostream>
using namespace std;

int main()
{
    int a,b,x,gcd;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;

    if(a<b)
    {
        x = b;
    }
    else
    {
        x = a;
    }

    for(x;x>=1;x--)
    {
        if(a%x==0 && b%x==0)
        {
            gcd = x;
            break;
        }
    }

    cout<<"Greatest Common Divisor: "<<gcd<<endl;

    return 0;
}
