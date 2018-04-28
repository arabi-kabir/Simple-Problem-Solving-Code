#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    up:
    char x[100];
    int counter=0;

    cout<<"Press 'exit' to close the program"<<endl<<endl;
    cout<<"Enter your word: ";
    cin>>x;

    int exit = strcmp(x,"exit");

    // to exit from the program
    if(exit == 0){
        return 0;
    }

    for(int i=0;x[i]!='\0';i++)
    {
        counter++;
    }
    char anti_x[counter];
    int i,j;
    for(i=counter-1,j=0;i!=(-1);i--)
    {
        anti_x[i] = x[j];
        j++;
    }
    anti_x[counter] = '\0';

    int result = strcmp(x,anti_x);

    if(result == 0)
    {
        cout<<"yes it's a palindrome"<<endl;
    }
    else
    {
        cout<<"sorry it's not a palindrome"<<endl;
    }
    goto up;

    return 0;
}
