#include<iostream>
using namespace std;

int main()
{
    int a,p=1,s=0,result,n;
    cin>>n;
        while(n!=0)
        {
            a=n%10;
            p*=a;
            s+=a;
            n/=10;
        }
        result=p-s;
        cout<<result;
}