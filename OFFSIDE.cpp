#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int A, D, distAttack[20], distDefend[20];
	cin >> A;
	cin >> D;

	while(A >= 2 && D >= 2)
	{
		for(int i = 0; i < A; i++)
		{
			cin >> distAttack[i];
		}
		for (int i = 0; i < D; ++i)
		{
			cin >> distDefend[i];
		}
		sort(distAttack, distAttack + A);
		sort(distDefend, distDefend + D);
		if(D > 1)
		{
			if(distAttack[0] >= distDefend[1])
			{
				cout << "N" << endl;
			}
			else
			{
				cout << "Y" << endl;
			}
		}
		else
		{
			cout << "Y" << endl;
		}
		

		cin >> A;
		cin >> D;
	}
}