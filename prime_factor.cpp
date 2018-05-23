#include<iostream>
using namespace std;
int main() 
{
int N,i,count=0,j;
cin>>N;
for(i=2;i<=N;i++)
{
if(N%i==0)
{
count=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
count++;
}
}
if(count==2)
{
cout<<i<<' ';
}
}
}
return 0;
}
