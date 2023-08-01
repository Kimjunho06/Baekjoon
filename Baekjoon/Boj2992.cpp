#include <iostream>
#include <vector>
#include <string>

using namespace std;

int value;
bool ck;
void BackTracking(int *arr, int num) {
    for (int i = 0; i <= 9; i++) {
        if (arr[i] == 0) continue;
        if (ck) break;
        arr[i]--;
        BackTracking(arr, (num * 10) + i);
        arr[i]++;
    }
    if (num > value) {
        value = num;
        ck = true;
    }
}

int main()
{
    string str;
    int arr[10] = {};

    cin >> str;
    value = stoi(str);

    for (int i = 0; i < str.size(); i++) {
        arr[str[i] - '0']++;
    }
    BackTracking(arr, 0);

    if (value == stoi(str)) {
        cout << 0;
    }
    else {
        cout << value;
    }
}