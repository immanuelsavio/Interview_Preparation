#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[5] = {5,3,2,4,1};
    int i;
    for(i=0;i<5;i++)
        cout<<a[i];
    sort(a,a+5);
    for(i=0;i<5;i++)
        cout<<a[i];
    return 0;
}