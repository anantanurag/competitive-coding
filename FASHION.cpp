#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, count, men[1000], women[1000], hotness = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{	
		cin >> count;
		for(int j = 0; j < count; j++)
		{
			cin >> men[j];
		}
		for(int j = 0; j < count; j++)
		{
			cin >> women[j];
		}
		sort(men, men + count);
		sort(women, women + count);

		for(int j = 0; j < count; j++)
		{
			hotness += women[j] * men[j];
		}
		cout << hotness << endl;
		hotness = 0;
	}
}