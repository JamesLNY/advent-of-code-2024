//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include <stack>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(string& s1, string& s2) {
//    return s1.size() > s2.size();
//}
//
//int main() {
//    ifstream input("input19.txt");
//    string inputLine;
//    stringstream inputLineStream;
//    map<char, vector<string>> sequences;
//    stack<string> dfs;
//    int output = 0;
//    if (input.is_open()) {
//        getline(input, inputLine);
//        inputLine += ',';
//        inputLineStream.str(inputLine);
//        while (getline(inputLineStream, inputLine, ' ')) {
//            inputLine = inputLine.substr(0, inputLine.size() - 1);
//            if (sequences.count(inputLine[0]) != 0) {
//                sequences[inputLine[0]].push_back(inputLine);
//            }
//            else {
//                sequences[inputLine[0]] = { inputLine };
//            }
//        }
//        for (pair<char, vector<string>> p : sequences) {
//            sort(p.second.begin(), p.second.end(), compare);
//        }
//        while (input >> inputLine) {
//            while (!dfs.empty()) dfs.pop();
//            dfs.push({ inputLine });
//            while (!dfs.empty()) {
//                inputLine = dfs.top();
//                dfs.pop();
//                if (inputLine == "") {
//                    output++;
//                    break;
//                }
//                for (string s : sequences[inputLine[0]]) {
//                    if (inputLine.substr(0, s.size()) == s) {
//                        dfs.push(inputLine.substr(s.size()));
//                    }
//                }
//            }
//        }
//        cout << output;
//    }
//    input.close();
//}