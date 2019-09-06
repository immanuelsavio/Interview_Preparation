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
