#include<iostream>

using namespace std;

class Int
{
    int intVal;
	static int num;
    public:

    Int()
    {
        intVal=0;
		num=100;
    }
    
    Int(int n)
    {
        intVal=n;
    }
    int get()
    {
        return intVal;
    }

    int add(Int n1,Int n2)
    {
        return n1.get() + n2.get();
    }


};

int main(int argc, char* args[])
{
	
    Int a=Int();
	Int o1=Int(35);
	Int o2=Int(65);
	cout<<a.num;
	cout<<o1.add(o1,o2);

}