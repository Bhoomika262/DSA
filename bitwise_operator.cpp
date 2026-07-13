#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a;
    cin>>b;
    //Bitwise operator
    cout << a << " & " << b << "=" << (a&b) << endl;
    cout << a << " | " << b << "=" << (a|b) << endl;
    cout << a << " ^ " << b << "=" << (a^b) << endl;
    cout <<" ~ "<< a << "=" << (~a) << endl;

    //Left and right shift
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    //Increment and decrement operator
    int i=7;
    cout<< (++i)<<endl;
    cout<< (i++)<<endl;
    cout<< (i--)<<endl;
    cout<< (--i)<<endl;
} 