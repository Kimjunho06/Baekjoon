//#include <iostream>
//#include <string>
//#include <stack>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<vector<int>> board, vector<int> moves) {
//    stack<int> s;
//    stack<int> ck;
//    vector<vector<int>> Board;
//    int answer = 0;
//
//    Board.resize(board.size());
//
//    for (int i = 0; i < board.size(); i++) {
//        Board[i].resize(board[i].size());
//        for (int j = 0; j < board[i].size(); j++) {
//            Board[i][j] = board[i][j];
//        }
//    }
//
//    for (int i = 0; i < Board.size(); i++) {
//        while (!ck.empty()) ck.pop();
//        for (int j = 0; j < Board[i].size(); j++) {
//            if (Board[i][j] == 0) continue;
//            if (ck.size() > 1) {
//                if (ck.top() == Board[i][j]) {
//                    Board[i][j] = -1;
//                    Board[i][j-1] = -1;
//                    ck.pop();
//                    answer += 2;
//                }
//                else {
//                    ck.push(Board[i][j]);
//                }
//            }
//            else {
//                ck.push(Board[i][j]);
//            }
//        }
//    }
//
//    for (int i = 0; i < moves.size(); i++) {
//        for (int j = 0; j < Board[moves[i] - 1].size() - 1; j++) {
//            if (Board[moves[i] - 1][j] == 0 || Board[moves[i] - 1][j] == -1) continue;
//            else {
//                s.push(Board[moves[i] - 1][j]);
//                Board[moves[i] - 1][j] = -1;
//                if (s.size() > 1) {
//                    if (s.top() == Board[moves[i] - 1][j]) {
//                        s.pop();
//                        s.pop();
//                        answer += 2;
//                    }
//                }
//                break;
//            }
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//    cout << solution({ {0,0,0,0,0}, {0,0,1,0,3}, {0,2,5,0,1}, {4,2,4,4,2}, {3,5,1,3,1} }, { 1,5,3,5,1,2,1,4 });
//}