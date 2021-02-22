#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        ll A[n];
        for(int i=0; i<n; i++)
            cin>>A[i];
        cin>>k;
        ll length = A[k-1];
        sort(A, A+n);
        int i;
        for(i=0; i<n; i++)
        {
            if(A[i]==length)
                break;
        }
        return i+1;
    }
}



