#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> p = {1,2,3,4,5};
	for(auto i=p.begin(); i<p.size();p++)
		cout<<p[i];
	return 0;
}

