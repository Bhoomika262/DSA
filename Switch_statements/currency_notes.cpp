#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the amount: ";
    cin >> n;

    switch (n / 1000)
    {
        case 0:
            break;

        default:
            cout << "Number of 1000/- notes: " << n / 1000 << endl;
            n %= 1000;
    }

    switch (n / 100)
    {
        case 0:
            break;

        default:
            cout << "Number of 100/- notes: " << n / 100 << endl;
            n %= 100;
    }

    switch (n / 10)
    {
        case 0:
            break;

        default:
            cout << "Number of 10/- notes: " << n / 10 << endl;
            n %= 10;
    }

    switch (n)
    {
        case 0:
            break;

        default:
            cout << "Number of 1/- notes: " << n << endl;
    }

    return 0;
}