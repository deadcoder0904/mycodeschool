#include <bits/stdc++.h>

using namespace std;

#define REP(i,n) for (int i = 0; i < n; ++i)
#define sortv(a) sort(a.begin(),a.end())

typedef long long ll;


void find_all_factors(ll n){
	vector<int> v;
	for (ll i = 1; i <= sqrt(n); ++i){
		if(i*i == n){
			v.push_back(i);
			break;
		}
		if(n % i == 0){
				v.push_back(i);
				v.push_back(n/i);
		}
	}
	sortv(v);
	REP(i,v.size())
		cout<<v[i]<<" ";
	cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		find_all_factors(n);
	}	
	return 0;
}