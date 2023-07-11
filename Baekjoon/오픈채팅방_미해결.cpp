#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;

    map<string, string> idname;
    vector<pair<string, string>> log;
    string state, id, name;

    for (auto s : record) {
        stringstream stream(s);
        stream >> state;
        stream >> id;
        stream >> name;

        if (state == "Change") {
            idname.find(id)->second = name;
        }
        else {
            if (idname.find(id) == idname.end()) {
                idname.insert({id, name});
            }
            else {
                idname.find(id)->second = name;
            }

            log.push_back({ state, id });
        }
    }

    for (auto a : log) {
        if (a.first == "Enter") {
            answer.push_back(idname.find(a.second)->second + "님이 들어왔습니다.");
        }
        else if (a.first == "Leave") {
            answer.push_back(idname.find(a.second)->second + "님이 나갔습니다.");
        }
    }


    return answer;
}

int main() {
    vector<string> v;

    v = solution({ "change uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" });

    for (auto a : v) {
        cout << a << endl;
    }
}