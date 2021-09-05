/* Write a program to find the largest number among three numbers entered by the user . */
#include<iostream>
#include<stdio.h>
using namespace std ;
int main()
{
int A , B , C , MAX = 0 , OPT ;
cout << "Enter 175 to execute the above program\n" ;
cin >> OPT ;
switch( OPT )
{
case 175 :cout << "Enter Any three values\n" ;
          cin >> A >> B >> C ;
          if( A > B )
          {
          if( A > C )
          {
          MAX = A ;
          }
          else
          {
          MAX = C ;
          }
          }
          else
          {
          if( B > C )
          {
          MAX = B ;
          }
          else
          {
          MAX = C ;
          }
          }
          cout << "The largest number between three numbers is " << MAX ;
          break ;
default : cout << "Entry not Accepted . " ;
}
return 0 ;
}

