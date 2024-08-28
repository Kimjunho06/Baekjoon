#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	string str;
	int result = 0;
	queue<int> numq;
	queue<char> operq;

	cin >> str;

	int num = 0;
	for (int i = 0; i < str.length(); i++) {

		if (str[i] == '+' || str[i] == '-') {
			numq.push(num);
			operq.push(str[i]);

			num = 0;
			continue;
		}

		num = (num * 10) + (str[i] - '0');
	}
	// last Num
	numq.push(num);

	// First Num Calc
	result += numq.front();
	numq.pop();
	if (str[0] == '-')
		result *= -1;

	while (!numq.empty())
	{
		int value = 0;
		if (operq.front() == '-') {

			while (!operq.empty())
			{
				operq.pop();

				value -= numq.front();
				numq.pop();

				if (operq.empty() || operq.front() == '-') 
				{
					break;
				}
			}
		}
		else {
			result += numq.front();
			numq.pop();
			operq.pop();
		}

		result += value;
	}

	std::cout << result;
}