#include<iostream>

using namespace std;

float lbstokg(float pounds)
{
    return 0.453592 * pounds;
}

int main(int argc, char * args[])
{
    float w;
    cout<<"Enter weight in pounds : ";
    cin>>w;

    cout<<"Weight in kilograms : "<<lbstokg(w)<<endl;
}