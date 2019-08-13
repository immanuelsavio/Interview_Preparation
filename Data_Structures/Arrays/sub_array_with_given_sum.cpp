#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int it,i;
	cin>>it;
	while(it>0){
		int n,s;
		cin>>n>>s;
		int arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
	    }
        int start=0, end=0,sum=0;
        while(end<=n){
	        end++;
			sum+=end;
			if(sum==s)
				break;
			else if(sum>s){
                sum-=start;
				start++;
            }
			else{
				sum-=end;
                end--;
            }
        }
        cout<<start<<" " <<end;
	}   
	return 0;
}

