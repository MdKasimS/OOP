#include<iostream>

using namespace std;

struct Distance{
    int feet;
    float inches;
};

void engdisp(Distance d)
{
    cout<<d.feet<<"\'-"<<d.inches<<"\"";
}

Distance addengl(Distance x1, Distance x2)
{
    Distance dd;

    dd.inches=x1.inches + x2.inches;

    dd.feet=0;

    if(dd.inches>=12.0)
    {
        dd.inches -= 12.0;
        dd.feet++;
    }

    dd.feet+= x1.feet + x2.feet;

    return dd;
}


int main(int argc, char * args[])
{
    Distance d1, d2, d3;
    
    cout<<"Enter feet : ";
    cin>>d1.feet;
    cout<<"Enter inches : ";
    cin>>d1.inches;

    cout<<"Enter feet : ";
    cin>>d2.feet;
    cout<<"Enter inches : ";
    cin>>d2.inches;

    d3=addengl(d1,d2);

    cout<<endl;

    engdisp(d1);
    cout<<" + ";

    engdisp(d2);
    cout<<" = ";

    engdisp(d3);
    cout<<endl;


    return 0;
}