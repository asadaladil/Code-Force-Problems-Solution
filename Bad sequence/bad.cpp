#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(st.size()==0||s[i]=='(')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.top()=='('&&s[i]==')')
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
        return 0;
    }
    while(st.size()!=0)
    {
        if(st.top()=='(')
        {
            a++;
        }
        else
        {
            b++;
        }
        st.pop();
    }
    if(a==1&&b==1)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}