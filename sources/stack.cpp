
#include "stack.hpp"
#include <string>
#include "stack.hpp"

int main()
{
	stack<int> st;
	char ch = ' ';
	while (std::cin >> ch)
	{
		int val = 0;
		switch (ch)
		{

		case'+':
			if (!(std::cin >> val))
			{
				std::cin.clear();
				std::cout << "An error has occurred while reading arguments" << std::endl; 
				while (std::cin.get() != '\n') continue;
			}
			else
				st.push(val);	
				break;

		case'-':
			if (st.isempty())
			{
				std::cout << "Stack is empty" << std::endl;
			}
			else 
			{
				std::cout << st.top() << std::endl;
				st.pop();
			}

		case'=':
 			if (st.isempty())
  			{
  				std::cout << "Stack is empty" << std::endl;
  			}
  			else 
 				st.print();
 			break;

		case'?':
			if (st.isempty()) 
			{
				std::cout << "Stack is empty" << std::endl;
			}
			else
			{
				val = st.top();
				std::cout << val << std::endl;
			}
			break;

		case'e':
			std::getchar();
			return 0;
			break;

		default:
			std::cout << "An error has occurred while reading arguments";
		}
	}

	system("pause");
	return 0;
}
