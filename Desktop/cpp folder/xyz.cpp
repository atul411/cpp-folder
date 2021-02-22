#include<iostream>
using namespace std;
string LowerCase(string str)  // converting a string into lower case
{
	string s = str;
	for(char &c : s)
		c = tolower(c);
	return s;
}
main()
{
	string a, b;
	cin>>a>>b;
	a = LowerCase(a);
	b = LowerCase(b);
	if(a==b)
		cout<<0<<endl;
	if(a<b)
		cout<<-1<<endl;
	if(a>b)
		cout<<1<<endl;
}