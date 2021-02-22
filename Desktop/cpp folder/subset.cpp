#include<bits/stdc++.h>
using namespace std;
//vector <string> str;
void printPer(string str1, string str2, set<string> &str)
{
    if(str2.length()==0)
    {
        if(str1 != "")
            str.insert(str1);
    }
    else
    {
        printPer(str1+str2[0],str2.substr(1),str);
        printPer(str1,str2.substr(1),str);
    }
}
int main()
{
    set<string> str;
    string str2 = "atul";
    string str1 = "";
    printPer(str1,str2,str);
    for(auto i: str)
        cout<<i<<"\t";
}
