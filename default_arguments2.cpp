#include<iostream>
using namespace std;

void print_details(string f_name, string l_name ="")
{
    cout<<f_name;
    if (l_name != "")
    {
        cout<<l_name<<endl;
    }

}

int main()
{
    print_details("Sandeep","Jain");
    print_details("Aishwarya","");

}
