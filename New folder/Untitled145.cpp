/* Write a nrogram that takes n elements from the user and displays the second largest element of an array . */
#include<iostream>
#include<stdio.h>
using namespace std ;
int main()
{
int i , j ,  n , temp = 0 , A [ 20 ] ;
cout << "Enter your range of numbers in the Array \n" ;
cin >> n ;
if( n <= 20 )
{
cout << "Enter your  numbers \n" ;
for( i = 0 ; i < n ; i++ )
{
cin >> A [ i ] ;
}
for( i = 0 ;  i < n ; i++ )
{
for( j = i+1 ; j < n ; j++ )
{
if( A[ j ] < A[ i ] )
{                                                                                                                                                                                           
temp = A [ i ] ;                                                                                                                                                                       
A [ i ] = A [ j ] ;
A [ j ] = temp ;
}
}
}
cout << "\nThe display of entered numbers by user After Sorting : \n" ;
for( i = 0 ; i < n ; i++ )
{
cout << A[ i ] << " " ;
}
cout << "\nThe second largest element of the above array is  " << A [ n - 2 ] ;
}
else
{
cout << "Out of range " ;                                                                                                                                              
}                                                                                                                                                                                          
return 0 ;
}


