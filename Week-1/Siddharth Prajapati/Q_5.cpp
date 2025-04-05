/*Write a C++ program to check if a Number is Perfect square using loops.*/

#include <iostream>
using namespace std;

int main() 
{
    int n,c=0;
   
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 0; i <= n; i++) 
    {
        if (i * i == n) 
        {
            c++;
        }
    }
   
    if (c>0) 
    {
        cout << n << " is a perfect square";
    }
    else
    {
        cout << n << " is not a perfect square";
    }
    
    return 0;
}
