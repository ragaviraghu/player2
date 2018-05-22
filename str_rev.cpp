#include <iostream>
using namespace std;
int main()
{
string S;
cout<<"Enter the string : "<<endl;
cin>>S;
int m=S.length();
for(int i=m-1;i>=0;i--)
{
if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u' && S[i]!='A' && S[i]!='E' && S[i]!='I' && S[i]!='O' && S[i]!='U')
{
cout<<S[i];
}
}
return 0;
}
