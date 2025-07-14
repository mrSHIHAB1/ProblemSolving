
#include <bits/stdc++.h>
using namespace std;

int dp[25];

int fib(int n){
	//base case
	if(n==0) return 0;
	if(n==1) return 1;

	//check if calculated or not
	if(dp[n]!=-1){
		//already calculated
		return dp[n];
	}
	//not calculated
	//function body
	int result = fib(n-1) + fib(n-2);
	dp[n] = result;
	return result;
}

int main() {

	for(int i=0; i<25; i++) dp[i]=-1;
	cout<<fib(6)<<endl;

	return 0;
}
