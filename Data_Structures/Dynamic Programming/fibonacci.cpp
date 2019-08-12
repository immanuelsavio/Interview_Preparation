#include<iostream>
using namespace std;
#define MAX 100

int ltable[MAX];
void init_table()
{
	for(int i=0;i<MAX;i++)
		ltable[i]=-1;
}

int lookup(int x){
if(x<=1){
	ltable[x] = x;
}
else{
	ltable[x] = lookup(x)+lookup(x-1);
}

	return ltable[x];

}

int main(){
	init_table();
	cout<<"HEHE"<<lookup(6);
	return 0;
}
