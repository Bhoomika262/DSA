#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,a;
    vector<int> arr;
    
    cout<<"Enter size of array: ";
    cin>>n;
    int s=0;
    int e=n-1;
    int key,mid=s+(e-s)/2; //Use this formula to avoid integer overflow

    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    cout<<"Enter the key: ";
    cin>>key;

    while(s<=e)
    {
        if(arr[mid]==key)
        {   
            cout<<"Found at index "<<mid;
            return 0;
        }
        else if(key> arr[mid])
        {
            s=mid+1;
            mid=s+(e-s)/2;
        }
        else
        {
            e=mid-1;
            mid=(s+e)/2;
        }
    }
    cout<<"Not found";
    return 0;
}