#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <queue>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <numeric>
#include <complex>

using namespace std;

#define min(x,y) x<y?x:y
#define max(x,y) x>y?x:y
#define REP(i,n) for (int i = 0; i < n; ++i)
#define REP1(i,n,step) for (int i = 0; i < n; i+=step)
#define REP2(i,x,y) for (int i = x; i < y; i++)
#define REP3(i,x,y,step) for (int i = x; i < y; i+=step)
#define NREP(i,n) for (int i = n-1 ; i >= 0; --i)
#define NREP1(i,n,step) for (int i = n-1 ; i >= 0; i-=step)
#define NREP2(i,x,y) for (int i = x; i >= y; i--)
#define NREP3(i,x,y,step) for (int i = x; i >= y; i-=step)
#define sortv(a) sort(a.begin(),a.end())

#define pb push_back
#define mp make_pair
 
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
const float PI=3.1415926535897932384626433832795;
const ull MOD=1e9+7;

bool even(ull x) { return x%2==0?true:false; }
bool odd(ull x) {return x%2==1?true:false; }
ull fact(ull a){ ull f=1; REP2(i,1,a+1) f*=i; return f;}
ull gcd(ull a, ull b){ return b == 0 ? a : gcd(b,a%b); }
ull lcm(ull a,ull b){ return a*b/gcd(a,b);}
ll fast_expo(ll a,ll b)
{
    if(b==1) return a;
    if(b==2) return a*a;
    return b&1 ? a*fast_expo(fast_expo(a,(b-1)/2),2) : fast_expo(fast_expo(a,b/2),2);
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		REP(i,n)
			cin>>a[i];
		int r;
		cin>>r;
		REP(i,r) {
			int temp = a[0];
			REP(j,n)
				a[j] = a[j+1];
			a[n-1] = temp;	
		}
		REP(i,n)
			cout<<a[i]<<" ";
		cout<<endl;		
	}
	return 0;
}