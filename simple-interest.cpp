#include <bits/stdc++.h>

using namespace std;

int main()
{
	int principle,numberofmonths;
	double yearlyrateofinterest;
	cin>>principle>>yearlyrateofinterest>>numberofmonths;
	cout<<(principle * (yearlyrateofinterest/ 12) * numberofmonths)<<endl;
	return 0;
}