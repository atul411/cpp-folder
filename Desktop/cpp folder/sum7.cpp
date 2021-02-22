#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v)
{
    for(auto i:v)
        cout<<i<<"\t";
}
bool sum7(vector<int> &arr,vector<int> &sol, int sum)
{
    if(sum == 0)
    {
        print(sol);
        cout<<endl;
        return true;
    }
    if(sol.size()==3||sum<0)
        return false;
    for(int i =0; i<arr.size();i++)
    {
        auto a = find(sol.begin(),sol.end(),arr[i]);
        if(a==sol.end())
        {
            sol.push_back(arr[i]);
           /* bool k = */
            sum7(arr,sol,sum-arr[i]);
            /*if(k)
                return true;*/
            sol.pop_back();
        }
    }
    return false;
}
int main()
{
    vector<int>arr{1,2,5,6,12,11,121,123};
    vector<int>sol;
    int sum = 3;
    //bool a =
    sum7(arr,sol,sum);
    /*for(auto i : sol)
        cout<<i<<"\t";
    if(a)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;*/
}
