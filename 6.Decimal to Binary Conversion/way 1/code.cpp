#include <iostream>
using namespace std;

void ConvertToBinary(int n)
{
    if (n / 2 != 0) {
        ConvertToBinary(n / 2);
    }
    cout<<n%2;
}

int main()
{
    unsigned int n;
    lvl:
    cout<<"Enter decimal value (press -1 to exit from program) : ";
    cin>>n;

    switch(n)
    {
        case -1:
            break;
        default:
            ConvertToBinary(n);
            cout<<endl;
            goto lvl;
    }

    return 0;
}
