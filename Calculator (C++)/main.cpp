#include <iostream>
using namespace std;

    int n,a,b,c,d,result;

void call_option()
{
    cout<<"-------Calculator-------"<<endl;
    cout<<"1.Adding"<<endl;
    cout<<"2.Subtracting"<<endl;
    cout<<"3.Multiplying"<<endl;
    cout<<"4.Dividing"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<endl;
}
int select_option()
{
    cout<<"Your option: ";
    cin>>n;
    return n;
}
void call_add()
{
    result = 0;
    cout<<"Number of input: ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cout<<"Input Next number: ";
        cin>>arr[i];
    }
    for(int i=0;i<a;i++)
    {
        result = result + arr[i];
    }
    cout<<"Summation : "<<result<<endl<<endl;
}
int main()
{
    call_option();
    select_option:
    int x = select_option();
    switch(x)
    {
        case 1:
            call_add();
            goto select_option;
        case 2:
//            call_sub();
        case 5:
            break;
    }

    return 0;
}
