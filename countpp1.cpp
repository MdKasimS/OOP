#include<iostream>

using namespace std;


class Counter 
{
	private:
	unsigned int count;

	public:

	Counter()
	{
		count=0;
	}

	int get_count()
	{
		return count;
	}

	void operator ++()
	{
		++count;
		//count-=1;
		//count++;
	}
};


int main(int argc, char * args[])
{
    Counter c1,c2;

	cout<<"c1 = "<<c1.get_count()<<endl;
	cout<<"c2 = "<<c2.get_count()<<endl;

	++c1;
	//c2++;1

	cout<<"c1 = "<<c1.get_count()<<endl;
	cout<<"c2 = "<<c2.get_count()<<endl;

	return 0;
}