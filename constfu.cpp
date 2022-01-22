#include<iostream>

using namespace std;

class aClass
{
    int alpha;

    public:

	void nConFunc()
	{
		alpha=99;
	}

};

int main(int argc, char * args[])
{
	aClass o;

	o.nConFunc();

}