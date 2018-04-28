#include <iostream>
using namespace std;

void prime_check(int x)
{
    int counter = 2;
    if(x<2)
    {
        cout<<"Not Prime"<<endl;
    }
    else
    {
        for(int i=2;i<x;i++)
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
    if(counter==x)
    {
        cout<<"prime"<<endl;
    }
    else if(counter>2 && counter!=x)
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
