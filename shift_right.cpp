#include <iostream>
using namespace std;
int main()
{
int N,K,a[N],temp;
cin>>N>>K;
for(int i=0;i<N;i++)
{
cin>>a[i];
}
for(int j=0;j<K;j++)
{
temp=a[N-1];
for(int i=N-1;i>0;i--)
{a[i]=a[i-1];
}
a[0]=temp;
}
for(int i=0;i<N;i++)
{
cout<<a[i];
}
return 0;
}
