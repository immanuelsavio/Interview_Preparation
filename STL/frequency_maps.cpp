#include<iostream>
#include<vector>
#include<map>
using namespace std;
int findFrequency(vector<int> v, int x){
    map<int, int> y;
    for(auto i=v.begin();i!=v.end();i++)
    {
        if(y.find(*i)->first==*i)
        {
            y.find(*i)->second++;
        }
        else
        {
            y[*i]=1;
        }
        
    }
    return y.find(x)->second;
}
int main()
{
    vector<int> z;
    int ab;
    z.push_back(10);
    z.push_back(10);
    z.push_back(20);
    z.push_back(10);
    z.push_back(30);
    ab = findFrequency(z, 10);
    cout<<ab;
    return 0;
}