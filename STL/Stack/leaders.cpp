#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long int i;
    vector<long long int> leader;
	while(n--)
	{	
		long long int size, lead=0;
		cin>>size;
		long long int arr[size];
		for(i=0;i<size;i++)
		{
			cin>>arr[i];//inputting array
			
		}
		lead = arr[size-1];
		for(i=size-1;i>=0;i--)
		{
			if(arr[i]>=lead)
			{
				leader.push_back(arr[i]);
				lead = arr[i];
			}
		}
        reverse(leader.begin(), leader.end());
        
        for(auto j=leader.begin(); j!=leader.end();++j)
            cout<<*j<<" ";
}
	return 0;
}

