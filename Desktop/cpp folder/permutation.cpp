#include<bits/stdc++.h>
using namespace std;
void printcomb(string str1, string str2)
{
    if(str2.size()==0)
    {
        cout<<str1<<endl;
    }
    else
    {
        printcomb(str1+str2[0], str2.substr(1));
        printcomb(str1, str2.substr(1));
    }
}
int main()
{
    string str1;
    cout<<"enter your string"<<endl;
    cin>>str1;
    string str2 = "";
    printcomb(str2,str1);
    //cout<<str2;
    //int a = fact(3);
    //cout<<a;
}
