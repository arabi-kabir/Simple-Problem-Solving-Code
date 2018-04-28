#include <iostream>
using namespace std;

int main()
{
    int a,remainder;
    cout<<"Enter input: ";
    cin>>a;
    remainder = a % 2;
    if(remainder==0)
    {
        cout<<"The Number is Even"<<endl;
    }
    else
    {
        cout<<"The Number is ODD"<<endl;
    }
    return 0;
}
