#include <iostream>
#include <math.h>
using namespace std;

void prime_check(int x)
{
    int root = sqrt(x);
    int counter = 2;
    if(x<2)
    {
        cout<<"Not Prime"<<endl;
    }
    if(x==2)
    {
        cout<<"prime"<<endl;
    }
    else
    {
        for(int i=3;i<=root;i+2)
        {
            if(x % i == 0)
            {

            }
            else
            {
                counter++;
            }
        }
    }

    if(counter==root)
    {
        cout<<"not prime"<<endl;
    }
}

int main()
{
    int n;
    cout<<"---- Prime checker ----"<<endl<<endl;

    lvl_1:
    switch(n)
    {
    case 0:
        break;
    default:
        cout<<"Enter your number: ";
        cin>>n;
        prime_check(n);
        goto lvl_1;
    }


    return 0;
}

