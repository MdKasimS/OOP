#include<iostream>

using namespace std;


int main()
{
    char str1[]="Salam Hindusthan !!!";

    const int MAX=21;

    char str2[MAX];

    strcpy(str2,str1);

    cout<<"Copied string is : "<<str2<<endl;
    return 0;
}