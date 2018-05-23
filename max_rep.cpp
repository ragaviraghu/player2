#include <iostream>
using namespace std;
int main()
{
string s;
char c;
int count=0,max=0;
getline(cin,s);
int n=s.length();
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(s[i]==s[j])
count++;
}
if(count>max)
{
max=count;
c=s[i];
}
}
cout<<c;
return 0;
}
