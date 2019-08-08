#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    int i;
    for(i=0;i<=5;i++)
        a.push_back(i);

    for(auto i=a.begin();i!=a.end();++i)
        cout<<*i;
    return 0;
}