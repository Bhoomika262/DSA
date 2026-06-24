#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
            
        }

        int star=1;
        while(star<=2*(i-1))
        {
            cout<<"*";
            star++;
        }
        
        int a=n-i+1;
        while(a>=1)
        {
            cout<<a;
            a--;
        }
        cout<<endl;
        i++;
    }
}