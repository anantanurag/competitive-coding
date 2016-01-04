#include <iostream>
#include <string>
#include <stack>

int main()
{
	std::stack<int> s;
	std::string result;
	int n; // number of love cars
	int input;
	int least_val = 1;
	int top;
	std::cin >> n;
	while(n != 0)
	{
		// std::cin >> input;
		for(int i = 0; i < n; i++)
		{
			std::cin >> input;
			if (input > least_val)
			{
				s.push(input);
				// std::cout << "pushing input  "<< input << "  ";
			}
			else
			{
				least_val++;
			}
		}
		// if(!s.empty())
		// {
		// 	top = s.top();
		// 	s.pop();
		// }
		while(s.size() > 1)
		{
			// std::cout << "stack has more than one element";
			top = s.top();
			s.pop();
			if(top > s.top())
			{
				result = "no";
				// break;
			}
			// std::cout << s.top() << std::endl;
			// s.pop();
			// top = s.top();
			// s.pop();
		}
		if(result != "no")
		{
			result = "yes";
		}
		else
		{
			result = "no";
		}
		std::cout << result << std::endl;


		result = "";
		least_val = 1;
		while(!s.empty())
		{
			// std::cout << "popping remaining stack elements" << std::endl;
			// std::cout << s.top() << " ";
			s.pop();
		}
		// std::cout << std::endl;
		std::cin >> n;
	}
	// std::cout<<std::endl;
	return 0;

}