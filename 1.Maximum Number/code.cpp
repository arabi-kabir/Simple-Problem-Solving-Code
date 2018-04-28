#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter number of input: ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    int setmax = arr[0];

    for(int n=0;n<a;n++)
    {
        if(arr[n]>setmax)
        {
            setmax = arr[n];
        }
    }

    cout<<"Max Value: "<<setmax;

    return 0;
}
