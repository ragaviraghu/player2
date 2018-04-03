#include<iostream>
using namespace std;
int main()
{
int N,r,sum=0;
cout<<"Enter the number : "<<endl;
cin>>N;
while(N!=0)
{
r=N%10;
sum=sum+r*r;
N=N/10;
}
cout<<"The sum of square of digits is : "<<sum<<endl;
return 0;
}
