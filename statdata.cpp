#include<iostream>

using namespace std;


class foo
{
    private:
    static int count;

    public:
    foo()
    {
        count++;
    }

    int getCount()
    {
        return count;
    }

    static void msg()
    {
        cout<<"Salam hindusthan !!!";
    }
};

int foo::count=0;
int main(int argc, char* args[])
{
    foo o= foo();

    foo o1;

    foo o2();
    
    foo::msg();
}