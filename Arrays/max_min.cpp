#include<iostream>
using namespace std;

void min_max(int a[],int size)
{
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min;
}
int main()
{
    int arr[10];
    cout<<"Enter your list of numbers: ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    min_max(arr,10);
}