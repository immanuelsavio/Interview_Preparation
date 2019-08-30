#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
        cin>>n>>k;
        long long int a[n],i,index=0;
        index = 0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];	//Inputs
        }
        while(index<n)
        {
            reverse(a+index,a+index+k);
            index = index+k;
            if(index>n)
            {
                if(index-k!=n-1)
                    reverse(a+(index-k),a+n);
                    
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
	return 0;
}


