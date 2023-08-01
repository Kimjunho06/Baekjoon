//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void BackTracking(int *arr, int num) {
//    for (int i = 0; i <= 9; i++) {
//        if (arr[i] == 0) continue;
//        arr[i]--;
//        BackTracking(arr, (num * 10) + i);
//        arr[i]++;
//    }
//}
//
//int main()
//{
//    string str;
//    int arr[10] = {};
//
//    cin >> str;
//
//    for (int i = 0; i < str.size(); i++) {
//        arr[str[i] - '0']++;
//    }
//    BackTracking(arr, 0);
//
//}