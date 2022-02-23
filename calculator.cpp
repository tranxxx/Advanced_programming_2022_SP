#include<iostream>
#include<stack>
using namespace std;

void calculator(std::string str)
{
	double ans;
	ans = atof(str.c_str());
	std::cout << ans;
}

int main()
{
	std::string ipt;
	cin >> ipt;
	calculator(ipt);
	return 0;
}