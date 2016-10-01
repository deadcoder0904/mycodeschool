#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void sum_of_all_factors(ll n){
	ll sum=0;
	for (ll i = 1; i <= sqrt(n); ++i){
		if(i*i == n){
			sum += i;
			break;
		}
		if(n % i == 0)
			sum += i + n/i;
	}
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