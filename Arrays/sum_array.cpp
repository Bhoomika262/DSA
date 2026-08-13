#include<iostream>
using namespace std;

void sum(int a[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    cout<<"Sum of all elements: "<<sum;
}
int main()
{
    int arr[10];
    cout<<"Enter your list of numbers: ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    sum(arr,10);
}