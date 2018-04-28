#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
using namespace std;

void Bin_2_Dec()
{
    char binary[100];
    int len,decimal,power,i;
    cout<<"Enter the binary number: ";
    cin>>binary;

    int length=0;
    for(int j=0;binary[j]!='\0';j++)
    {
        length++;
    }
    cout<<"Number of binary digit: "<<length<<endl;
    power = length - 1;
    decimal = 0;
    for(i=0;i<length;i++)
    {
        decimal = decimal + ((binary[i]- '0') * pow(2,power));
        power--;
    }
    cout<<"Decimal: "<<decimal<<endl;
}

int main()
{
    string n;
    lvl:
    cout<<"Do you want to convert binary to decimal(type 'yes' or 'no'): ";
    cin>>n;

    if(n == "yes")
    {
        Bin_2_Dec();
        goto lvl;
    }

    return 0;
}

