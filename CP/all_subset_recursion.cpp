#include <bits/stdc++.h>
using namespace std;

int n, arr[15];
vector<int>currentsubset;

void gen(int ind){

	if(ind==n){
		for(int a : currentsubset){
			cout<<a<<" ";
		}
		cout<<endl;
		return;
	}


	gen(ind+1);

	currentsubset.push_back(arr[ind]);
	gen(ind+1);
	currentsubset.pop_back();
}

int main() {
	cin>>n;
	for(int i=0; i<n; i++) cin>>arr[i];
	gen(0);
	return 0;
}
