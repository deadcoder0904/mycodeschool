#include <bits/stdc++.h>

using namespace std;

void bin2dec(string n){
	int num=0,powerOf2=1;
	for (int i = n.length()-1; i >= 0; --i)
	{
		if(n.at(i) == '1')
			num += powerOf2;
		powerOf2 *= 2;
	}
	cout<<num<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		bin2dec(n);
	}	
	return 0;
}