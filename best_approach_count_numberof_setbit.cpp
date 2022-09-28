#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        int cnt=0;
        cin>>n;
        while(n>0)
        {
           if((n&1)==1)
             cnt++;
             n=n>>1;
        }
        cout<<cnt<<endl;
    }

}
