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
}