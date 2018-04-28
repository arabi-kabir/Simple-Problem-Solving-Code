#include <iostream>
using namespace std;


int main()
{
    up:
    int x,result = 1;
    cout<<"Enter value: ";
    cin>>x;

    //Factorial counting function
    for(int i=1;i<=x;i++)
    {
        result = result * i;
    }

    cout<<"Factorial of "<<x<<" is "<<result<<endl;
    goto up;



    return 0;
}
