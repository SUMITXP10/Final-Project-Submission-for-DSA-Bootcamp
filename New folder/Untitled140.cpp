/* Write a program to Swap to two numbers . */
#include<iostream>
#include<stdio.h>
using namespace std ;
int main()
{
int num1 , num2 , temp ;
cout << "Enter any two values \n" ;
cin >> num1 >> num2 ;
cout<< "\nThe value of numbers Before swap is\n" << num1 << "\n" << num2 ;
temp = num1 ;
num1 = num2 ;
num2 = temp ;
cout<< "\nThe value of numbers After swap is\n" << num1 << "\n" << num2 ;
return 0 ;
}

