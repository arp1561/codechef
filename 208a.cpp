#include<bits/stdc++.h>
using namespace std;
signed main()
{
    string s; cin>>s;
    string delim = "WUB";


    vector<string> vec;
    size_t pos = 0;
    string token;
    while((pos= s.find(delim)) != string::npos)
    {
    
        token = s.substr(0,pos);
        if(!token.empty())
            vec.push_back(token);
        s.erase(0,pos+delim.length());

    }
    if(!s.empty())
        vec.push_back(s);
    for(vector<string>::iterator it = vec.begin();it!=vec.end();it++)
        cout<<*it<<" ";
}


