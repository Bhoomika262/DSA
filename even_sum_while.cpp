#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int i=2;
    int sum=0;
    int count=1;

    while(count<=n)
    {
        sum=sum+i;
        i+=2;
        count++;
    }
    cout<<"Sum of first "<<n<<" even numbers is "<<sum<<endl;
}