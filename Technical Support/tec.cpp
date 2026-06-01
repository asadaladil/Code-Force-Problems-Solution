#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        getchar();
        string s;
        cin>>s;
        stack<char>st;
        bool d=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='Q')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.size()==0)
                {
                    st.push(s[i]);
                }
                else if(st.top()=='Q')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        if(st.size()==0)
        {
            cout<<"Yes\n";
        }
        else
        {
            while(st.size()!=0)
            {
                if(st.top()=='Q')
                {
                    cout<<"No\n";
                    d=false;
                    break;
                }
                st.pop();
            }
            if(d)
            {
                cout<<"Yes\n";
            }
        }

    }
}