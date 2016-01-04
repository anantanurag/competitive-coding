#include <cstdio>
#include <stack>
#include <queue>
#include <iostream>
#include <string>


int main()
{
	using namespace std;
	stack<char> ops;
	queue<char> result; 
	string operands = "abcdefghijklmnopqrstuvwxyz";
	string operators = "+-*/^";
	string ret = "";

	int t = 0;  // Number of expressions
	scanf("%d", &t);
	string exps[t];
	// for(int i = 0; i < t; i++)
	// {
	// 	exps[i] = "123";
	// }


	// for(int i = 0; i < t; i++)
	// {
		// cout<<exps[i].at(2)<<endl;
	// }

	for(int i = 0; i < t; i++)
	{
		cin >> exps[i];
	}
// 
	// for(int i = 0; i < t; i++)
	// {
		// cout << exps[i] << endl;
	// }
	for (int i = 0; i < t; ++i)
	{
		for (int j = 0; j < exps[i].size(); ++j)
		{
			if(operands.find(exps[i].at(j)) < 26)  // if char is an operand
			{
				// cout << "character received: " << exps[i].at(j) << ", hence operand "<< operands.find(exps[i].at(j)) << endl;
				result.push(exps[i].at(j));
			}
			else if(operators.find(exps[i].at(j)) < 5)
			{
				/* Implement priority order of operators */
				// cout << "character received: " << exps[i].at(j) << ", hence operator "<<endl;
				ops.push(exps[i].at(j));  // to be modified
			}
			else if (exps[i].at(j) == '(')
			{
				// cout << "character received: " << exps[i].at(j) << ", hence continue; "<<endl;
				continue;
			}
			else if (exps[i].at(j) == ')')
			{
				// cout << "character received: " << exps[i].at(j) << ", hence push operator "<<endl;
				result.push(ops.top());
				ops.pop();
			}
			else
			{
				return -1;
			}
		}
		while(!ops.empty())
		{
			result.push(ops.top());
			ops.pop();
		}
		while(!result.empty())
		{
			ret.insert(ret.end(), result.front());
			result.pop();
		}
		
			cout << ret << endl;
			ret = "";

	}
	return 0;

}