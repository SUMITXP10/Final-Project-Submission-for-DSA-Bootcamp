/* Write a program to check whether a number is Prime or Not. */
#include<iostream>
#include<stdio.h>
using namespace std ;
int main()
{
int i , num , flag=0 ;
cout << "Enter your Number to check whether a number is Prime or Not \n" ;
cin >> num ;
for( i = 1 ; i <= num ; i++ )
{
if( num % i == 0 )
{
flag++ ;
}
}
if( flag == 2 )
{
cout << num << " is a Prime number . " ;
}
else
{
cout << num << " is not a Prime number . " ;
}
return 0 ;
}
