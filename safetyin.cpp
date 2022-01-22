#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char* args[])
{
    const int MAX=6;

    char str[MAX];

    cout<<"Enter a string : ";
    cin>>setw(MAX) >>str;

    cout<<"You entered : "<<str<<endl;

    cout<<"Enter a string : ";
    cin>>setw(MAX) >>str;

    cout<<"You entered : "<<str<<endl;

    
    return 0;
}