#include <iostream>
using namespace std;
int main() 
{
int N,arr[N],i,j,count;
cin>>N;
for(int i=0;i<N;i++)
{
cin>>arr[i];
}
for(int i=0;i<N;i++)
{
count=0;
for(int j=0;j<N;j++)
{
if(i!=j && arr[i]==arr[j])
{
count++;
break;
}
}
if(count==0)
{cout<<arr[i]<<endl;
}
}
return 0;
}
