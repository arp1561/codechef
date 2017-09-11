#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T; cin>>T;
    cin.ignore();
    while(T--)
    {
        string s;
        getline(cin,s);
        for(int i=0;i<s.length();i++) s[i] = tolower(s[i]);


        vector<string> vec;
        istringstream iss(s);
        for(string buff; iss>>buff;) vec.push_back(buff);

        vector<string>::iterator it;
        if(vec.size()==1)
        {
            string temp = vec[0];
            temp[0] = toupper(temp[0]);
            cout<<temp<<endl;
        }
        else 
        {
            for(it=vec.begin();it!=vec.end()-1;it++)
            {
                string temp = *it;
                char x= toupper(temp[0]);
                cout<<x<<". ";
            }
            string temp = *it; 
            temp[0]=toupper(temp[0]);
            cout<<temp<<endl;

        }
    }

}

