/* Write a program to display Fibonacci Series upto nth term . ( Using loops ) */
#include<iostream>
#include<stdio.h>
using namespace std ;            											
int main ()
{
int n , i , X = 0 , Y = 1 , temp , sum = 1 ;
cout << "Enter the value of nth term upto which sum of Fibonacci series will be found \n" ;
cin >> n ;
for( i = 2 ; i < n ; i++ )
{
temp = X + Y ;
sum = sum + temp ;
X = Y ;
Y = temp ;
}
cout << "The " << n << " terms upto which the sum of Fibonacci series will be found is "  << Y ;
cout << "\nThe sum of Fibonacci series upto " << n << " terms is "  << sum ;
return 0 ;
}

