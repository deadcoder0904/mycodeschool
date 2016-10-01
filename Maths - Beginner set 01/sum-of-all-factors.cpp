#include <bits/stdc++.h>

using namespace std;

void sum_of_all_factors(int n){
	int sum=1;
	for (int i = 2; i <= n; ++i)
		if(n % i == 0)
			sum += i;
	cout<<sum<<endl;	
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		sum_of_all_factors(n);
	}	
	return 0;
}