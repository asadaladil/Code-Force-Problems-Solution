#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="314159265358979323846264338327";
    int t;
    cin>>t;
    while(t--)
    {
        string r;
        cin>>r;
        int a=0;
        for(int i=0;i<r.size();i++)
        {
            if(s[i]!=r[i])
            {
                break;
            }
            else
            {
                a++;
            }
        }
        cout<<a<<endl;
    }
}