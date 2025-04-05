/*Write a program to print the numbers from 1 to 100, but
replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz" and if divisible
by both print “FizzBuzz”.*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    
    for(n=1; n<=100; n++)
    {
        if(n%3==0)
        {
            if(n%5==0)
            {
                cout << "FizzBuzz" << " ";
            }
            else
            {
                cout << "Fizz" << " ";
            }
        }
        
        else if(n%5==0)
        {
            if(n%3==0)
            {
                cout << "FizzBuzz" << " ";
            }
            else
            {
                cout << "Buzz" << " ";
            }
        }
        
        else
        {
            cout << n << " ";
        }
    }

    return 0;
}
