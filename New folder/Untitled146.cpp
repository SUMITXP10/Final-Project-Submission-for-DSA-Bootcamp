/* Left Rotation */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std ;
int main() 
{  
unsigned long long int n ,d ;
cin>>n>>d;
unsigned long long int a[n];
unsigned long long int i;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=d;i<n;i++)
{
cout<<a[i]<<" ";
}
for(i=0;i<d;i++)
{
cout<<a[i]<<" ";
}
return 0;
}
