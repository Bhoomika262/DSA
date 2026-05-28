#include<iostream>
using namespace std;

int main()
{
    int a=9;
    int b=5;
    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
    cout<<"a*b="<<a*b<<endl;
    cout<<"a/b="<<a/b<<endl;  
    cout<<"a%b="<<a%b<<endl; 
    
    float c=10;
    float d=4;
    cout<<"c/d"<<"="<<c/d<<endl;

    //Relational operators
    cout<<"a>b? ="<<(a>b)<<endl;
    cout<<"a=b? ="<<(a==b)<<endl;
    cout<<"a<b? ="<<(a<b)<<endl;
    cout<<"a>=b ="<<(a>=b)<<endl;
    cout<<"a<=b ="<<(a<=b)<<endl;

    //Logical operators
    int e=1;
    int f=0;
    cout<<"e&&f ="<<(e&&f)<<endl;
    cout<<"e||f ="<<(e||f)<<endl;
    cout<<"!e ="<<(!e)<<endl;
}