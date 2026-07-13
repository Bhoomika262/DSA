#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // code here
    int i=0;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}