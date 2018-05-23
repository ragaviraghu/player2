#include<iostream>
using namespace std;
int main()
{
int L,R,i;
cin>>L>>R;
for(i=2;i<=L*R;i++)
{
if((i%L)==0 && (i%R)==0)
{
break;
}
}
cout<<i;
return 0;
}
