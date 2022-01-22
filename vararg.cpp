#include<iostream>

using namespace std;


void repchar(char ch, int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<ch;
    }
}

int main(int argc, char *args[])
{
    int num;
    char chin;

    cout<<"Enter charaacter : ";
    cin>>chin;

    cout<<"Enter count : ";
    cin>>num;

    repchar(chin,num);
}