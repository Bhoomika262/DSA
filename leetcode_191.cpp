#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(n!=0)
    {
        if(n&1)
            count++;
        n=n>>1;
    }
    cout<<"Number of 1's in binary representation of this number is "<<count;
}