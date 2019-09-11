#include<iostream>
#include<vector>
using namespace std;
int win_size = 0;
void get_product(vector<int> &v1)
{
	int p=1, x1= win_size;
	auto x=v1.end();
	while(x1>=0)
	{
		p=p*(*x);
		x1--;
		x--;
		cout<<x;
	}
}
int main()
{
	vector<int> s;
	cout<<"Enter window size\n";
	cin>>win_size;
	while(1)
	{
		int c;
		cout<<"\n1.Add Number\n2.Get Product\n3.Check Window\n4.Exit\n";
		cin>>c;
		case 1:
			int a;
            cout<<"Enter number";
            cin>>a;
			s.push_back(a);
			break;
		case 2:
			get_prod(s);
			break;
		case 3:
			//show_wind(s);
			break;
		case 4:
			exit(0);
	}
}
