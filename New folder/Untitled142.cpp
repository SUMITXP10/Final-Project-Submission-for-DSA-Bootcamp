/* Write a program to check whether a year entered by a user is Leap year or not . */
#include<iostream>
#include<stdio.h>
using namespace std ;
int main()
{
int YEAR , flag = 0 ;
cout << "Enter Year \n" ;
cin >> YEAR ;
if( ( YEAR % 100 ) == 0 )
{
if( ( YEAR % 400 ) == 0 )
{
flag++ ;
}
}
if( ( YEAR % 4 ) == 0 )
{
flag++ ;
}
if( flag > 0 )
{
cout << YEAR << " is a leap year . " ;
}
else
{
cout << YEAR << " is not a leap year . " ;
}
return 0 ;
}

