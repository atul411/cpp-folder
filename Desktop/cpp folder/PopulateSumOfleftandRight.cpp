#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cout<<"enter the string"<<endl;
	cin>>a;
	unordered_map<char, int> umap;
	int l = a.size();
	for(int i=0; i<l; i++)
	{
		umap[a[i]]++;
	}
	int p=0;
	for(int i=0; i<l; i++)
	{
		if(umap[a[i]]%2 !=0 )
			p++;
	}
	if(p>=2)
	{
		cout<<"can't be formed"<<endl;
	}
	else
		cout<<"can be formed"<<endl;

}