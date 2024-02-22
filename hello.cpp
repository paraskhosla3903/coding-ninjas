#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	pair<int,int*> node;
	int i = 5;
	node = make_pair(i,&i);
	cout << node.first << " " << node.second << endl;
}