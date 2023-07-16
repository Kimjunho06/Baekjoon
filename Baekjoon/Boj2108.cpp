#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n;
	int a = 0, b = 0;
	int arr[8001] = {};
	int input, max = 1;
	vector<int> count;
	vector<int> v;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
		a += input;
		if (input >= 0) {
			arr[input + 4000]++;
		}
		else {
			arr[-input - 1]++;
		}
	}

	sort(v.begin(), v.end());

	if (n == 1) {
		b = v[0];
	}
	else {
		for (int i = 0; i <= 8000; i++) {
			if (max <= arr[i]) {
				if (max == arr[i]) {
					if (i >= 4000) {
						count.push_back(i - 4000);
					}
					else {
						count.push_back(-i - 1);
					}
				}
				else if (max < arr[i]) {
					count.clear();
					if (i >= 4000) {
						count.push_back(i - 4000);
						max = arr[i];
						b = i - 4000;
					}
					else {
						count.push_back(-i - 1);
						max = arr[i];
						b = -i -1;
					}
				}
			}
		}
		sort(count.begin(), count.end());

		if (count.size() == 1) {
			b = count[0];
		}
		else {
			b = count[1];
		}
	}


	if (round((float)a / (float)n) == 0) cout << 0 << endl;
	else cout << round((float)a / (float)n) << endl;
	
	cout << v[(int)(n / 2)] << endl;
	
	cout << b << endl;

	cout << v[n-1] - v[0] << endl;
}