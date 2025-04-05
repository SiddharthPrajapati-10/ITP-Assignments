/* Write a C++ program to find the largest digit in a number.*/

#include<iostream>
using namespace std;

int main()
{
    int n,d,lar;
    
    cout << "Enter a number: ";
    cin >> n;

    lar = n % 10;

    while(n!=0)
    {
        d = n % 10;
        if(d>lar)
        {
            lar = d;
        } 
        n = n / 10;
    }

    cout << "Largest digit: " << lar;

    return 0;
}
