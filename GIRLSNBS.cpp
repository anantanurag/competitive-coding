#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int g,b;
	cin >> g;
	cin >> b;

	int minimum, maximum;
	while(g != -1 || b != -1)
	{
		minimum = min(g, b);
		maximum = max(g, b);
		if(minimum == 0 && maximum == 0)
		{
			cout << 0 << endl;
		}
		else if(minimum == 0 || maximum == 0)
		{
			cout << maximum << endl;
		}
		else if(g == b)
		{
			cout << 1 << endl;
		}
		else if( maximum % (minimum + 1) != 0)
		{
			
			cout << (maximum / (minimum + 1)) + 1 << endl;

		}
		else
		{
			cout << (maximum / (minimum + 1))<< endl;
		}
		cin >> g;
		cin >> b;
	}
}
	