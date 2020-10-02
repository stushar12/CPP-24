#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin>>p;
    while(p)
    {
    string s1,s2;
    cin>>s1>>s2;
    int flag=0;
    if(s1.length()==s2.length())
    {
    for(int i =0;i<s1.length();i++)
    {
        char ch=s1[i];
        if(s2.length()&& s2.find(ch)<s2.length())
        {
            s2.erase(s2.begin()+s2.find(ch));
            flag=1;
            if(s2.length()==0)
            break;
        }
        else
        {
            flag=0;
            cout<<"NO"<<"\n";
            break;
        }
        
    }
    }
    else
    {
        cout<<"NO"<<"\n";
    }
if(flag)
{
    cout<<"YES"<<"\n";
}
p--;
    }
}