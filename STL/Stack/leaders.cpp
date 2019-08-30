#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
        stack<int> s;
		
        int size,ele;
        int p=0;
        cin>>size;
        int arr[2];
        cin>>arr[0]>>arr[1];
        size--;
        size--;
        //Checking if the first element is a leader
        if(arr[0]>arr[1])
            cout<<arr[0]<<" ";
        else
        {
            s.push(arr[0]);
            s.push(arr[1]);
        }
        while(size>=0)
        {
            size--;
            cin>>ele;
            if(s.empty())
                s.push(-1);
            if(s.top()<ele)
                s.push(ele);
            else
            {
                s.push(ele);
                s.pop();
                cout<<s.top()<<" ";
                while(!s.empty())
                    s.pop();
            }
            cout<<s.top()<<" ";
        }
        
    }   
	return 0;
}

