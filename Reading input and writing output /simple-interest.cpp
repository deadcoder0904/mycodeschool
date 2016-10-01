#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberofmonths;
	double principle,yearlyrateofinterest;
	cin>>principle>>yearlyrateofinterest>>numberofmonths;
	cout<<setprecision(2)<<fixed<<(principle*(yearlyrateofinterest/ 12.0)*numberofmonths)*0.01<<endl;
	return 0;
}