/* Print this pattern using loops
For n=5
	    *
	   * *
	  * * *
	 * * * *
	* * * * *  */
#include<iostream>
#include<stdio.h>
using namespace std ;
int main()
{
int i , j , n = 5 , z = 1 ;
for( i = n ; i >= 1 ; i-- )
{
while( z < i )
{
cout<< " "  ;
z++ ;
}
for( j = n ; j >= i ; j-- )
{
cout<< "* " ;
}
z = 1 ;
cout<< "\n" ;
}
return 0 ;
}		
