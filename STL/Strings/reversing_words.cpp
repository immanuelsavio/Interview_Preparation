#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s,o;
    cout<<o;
    getline(cin,s);
    //cout<<s[2];
    
    auto x = s.end();
    while(x>=s.begin()){
        //cout<<*x;
        o.push_back(*x);
        x--;
    }
    int flag=0;
    auto index1 = o.begin();
    auto index2 = o.begin();
    for(auto i=o.begin();i!=o.end();i++)
    {
        if((*i=='.')&&(flag == 0))
        {
            flag = 1;
            index1 = i;
        }
        if((*i=='.')&&(flag == 1))
        {
            flag = 2;
            index2 = i;
        }
        if(flag==2)
        {
            flag = 0;
            reverse(index1, index2);
        }
    }
    cout<<o;
    return 0;
}