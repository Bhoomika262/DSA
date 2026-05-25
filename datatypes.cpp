#include<iostream>
using namespace std;

int main()
{
    int a=123;
    cout<<a<<endl;

    char b='b';
    cout<<b<<endl;

    bool c=true;
    cout<<c<<endl;

    float f=1.2;
    cout<<f<<endl;

    double d=1.2365599;
    cout<<d<<endl;

    int size= sizeof(d);
    cout<<"Size of d is: "<<size<<endl;

    //Typecasting
    int n='a';
    cout<<n<<endl;

    char m=99;
    cout<<m<<endl;

    //If we store bigger value than the variable size then it will give result for the digits stored, rest it will
    char o=123456;
    cout<<o<<endl;
}