#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	long long int n, r;
	double s = 0.00;

	cin >> n;
	for(long long int i = 0; i < n; i++)
	{
		cin >> r;
		s = (4*r*r) + 0.25;
		cout << "Case " << i + 1 << ": " << setprecision(3) << s << endl;
		s = 0.00;
	}
}