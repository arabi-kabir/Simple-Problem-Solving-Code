#include <iostream>
using namespace std;

// student structure
typedef struct student{
    int id;
    string dept;
    double cgpa;
};
// Global Variable declaration
    int item=0;
    student s1[10];

// student data insert
void insert_student_info()
{
    cout<<"Enter student id: ";
    cin>>s1[item].id;
    cout<<"Enter student dept: ";
    cin>>s1[item].dept;
    cout<<"Enter student cgpa: ";
    cin>>s1[item].cgpa;
    cout<<endl;
    cout<<"------ Data Inserted ------"<<endl;
    cout<<endl;
    item++;
}
// Option display
void display_option()
{
    cout<<"----------Select an option----------"<<endl;
    cout<<endl;
    cout<<"0.Exit."<<endl;
    cout<<"1.All Student info."<<endl;
    cout<<"2.Specific Student info."<<endl;
    cout<<"3.Insert Student info."<<endl;
    cout<<"4.Delete Student info.(disable)"<<endl;
    cout<<endl;
}

// student data display
void student_data()
{
    if(item==0)
    {
        cout<<"No entered data"<<endl;
    }
    else if(item > 9)
    {
        cout<<"memory full"<<endl;
    }
    else
    {
        for(int i=0;i<item;i++)
        {
            cout<<"----------------"<<endl;
            cout<<"ID: "<<s1[i].id<<endl;
            cout<<"Dept: "<<s1[i].dept<<endl;
            cout<<"Cgpa: "<<s1[i].cgpa<<endl;
        }
    }
}
// specific student info search
void search_student()
{
    cout<<"Enter student id: ";
    int a;
    cin>>a;

    if(item==0)
    {
        cout<<"No entered data"<<endl;
    }
    else
    {
        for(int i=0;i<item+1;i++)
        {
            if(s1[i].id==a)
            {
                cout<<"---------id found-------"<<endl;
                cout<<"ID: "<<s1[i].id<<endl;
                cout<<"Dept: "<<s1[i].dept<<endl;
                cout<<"Cgpa: "<<s1[i].cgpa<<endl;
            }
        }
    }

}


// Main Function
int main()
{
    display_option();

    label:
    cout<<"Please enter your option(0-4): ";
    int option;
    cin>>option;

    switch(option)
    {
        case 1:
            student_data();
            goto label;
        case 2:
            search_student();
            goto label;
        case 3:
            insert_student_info();
            goto label;
        case 0:
            break;
    }

    return 0;
}
