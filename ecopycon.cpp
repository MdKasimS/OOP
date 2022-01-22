#include<iostream>

using namespace std;

class Distance
{
    private:
    int feet;
    float inches;

    public:

    Distance()
    {
        feet=0;
        inches=0.0;
    }

	Distance(int ft, float in)
	{
		feet=ft;
		inches=in;
	}

	void getDist()
	{
		cout<<"Enter feet : ";
		cin>>feet;

		cout<<"Enter inches : ";
		cin>>inches;
	}

	void showDist()
	{
		cout<<feet<<" \'-" <<inches <<'\"';
	}
};


int main(int argc, char *args[])
{
	Distance dist1(11,6.25);

	Distance dist2(dist1);

	Distance dist3=dist2;

	dist1.showDist();

	dist2.showDist();

	dist3.showDist();

}