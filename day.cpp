#include<iostream>
#include<string>
using namespace std;
int main()
{
string day;
cout<<"Enter the day : "<<endl;
getline(cin,day);
if(day[0]=='S' || day[0]=='s')
cout<<"Yes(Hoiliday)"<<endl;
else
cout<<"No"<<endl;
return 0;
}
