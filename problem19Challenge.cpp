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
//map<string, long long> storage;
//map<char, vector<string>> sequences;
//
//bool compare(string& s1, string& s2) {
//    return s1.size() > s2.size();
//}
//
//long long dfs(string current) {
//    if (storage.count(current) != 0) return storage[current];
//    if (current == "") return 1;
//    long long output = 0;
//    for (string s : sequences[current[0]]) {
//        if (current.substr(0, s.size()) == s) {
//            output += dfs(current.substr(s.size()));
//        }
//    }
//    storage[current] = output;
//    return output;
//}
//
//int main() {
//    ifstream input("input19.txt");
//    string inputLine;
//    stringstream inputLineStream;
//    long long output = 0;
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
//            output += dfs(inputLine);
//        }
//        cout << output;
//    }
//    input.close();
//}