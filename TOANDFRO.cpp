#include <iostream>
#include <string>


int main()
{
	using namespace std;
	int col;
	string crypted = "";
	string result = "";
	int subt = 1;
	int start = 0;
	int len;
	cin >> col;
	while(col != 0)
	{
		cin >> crypted;
		len = crypted.size();
		for(int j = 0; j < col; j++)
		{
			// result.insert(result.end(), crypted.at(start));
			for(int i = 1; i < len; i+= 2*col)
			{
				cout << "str.len = " << len << ", and start + i = " << start + i + subt -1 << endl; 
				result.insert(result.end(), crypted.at(start + i - subt));	
				cout << result << endl;
				if(start + i + subt -1 >= len)
					continue;
				result.insert(result.end(), crypted.at(start + i + subt -1));			
			}
			start++;
			subt+=2;
		}
		
		cout << result << endl;
		cin >> col;
		crypted = "";
		result = "";
		subt = 1;
		start = 0;
	}
}