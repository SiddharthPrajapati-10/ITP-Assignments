/*Write a C++ program to input 3 sides of triangle and a triangle can be drawn
from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
scalene triangle.*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cout << "Enter 3 sides of a triangle:" << "\n";
    cin >> a >> b >> c;

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        cout << "Triangle can be formed" << "\n";

        if(a==b && b==c && c==a)
        cout << "Triangle is Equilateral";
        else if(a==b || b==c || c==a)
        cout << "Triangle is Isosceles";
        else
        cout << "Triangle is Scalene";
    }
    
    else
    {
        cout << "Triangle cannot be formed";
    }

    return 0;
}
