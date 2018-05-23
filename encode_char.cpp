#include<iostream>
#include<string>
using namespace std;
int main()
{
string s;
cin>>s;
int n=s.length();
for(int i=0;i<n;i++)
{
if(s[i]>87 && s[i]<91 || s[i]>119 && s[i]<123 )
s[i]=s[i]-23;
else
s[i]=s[i]+3;
}
cout<<s;
return 0;
}
