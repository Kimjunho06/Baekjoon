#include <iostream>
#include <map>

using namespace std;

int main() {
	string str, grade;
	double score, sum = 0, multySum = 0;
	map<string, double> mp;

	mp["A+"] = 4.5f;
	mp["A0"] = 4.0f;
	mp["B+"] = 3.5f;
	mp["B0"] = 3.0f;
	mp["C+"] = 2.5f;
	mp["C0"] = 2.0f;
	mp["D+"] = 1.5f;
	mp["D0"] = 1.0f;
	mp["F"] = 0.0f;

	for (int i = 0; i < 20; i++) {
		cin >> str >> score >> grade;

		if (grade == "P") continue;

		sum += score;
		multySum += score * mp.find(grade)->second;
	}

	cout << multySum / sum;
}