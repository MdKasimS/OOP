#include<iostream>

using namespace std;

void repchar(char ch,int n )
{
    for(int i=0;i<n;++i)
    {
        cout<<ch;
    }
    cout<<endl;
}

int main(int argc, char *args[])
{

    repchar('=',45);

    repchar('^',30);
}