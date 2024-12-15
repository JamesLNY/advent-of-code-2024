//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <set>
//
//using namespace std;
//
//int main() {
//    ifstream input("input15.txt");
//    string inputLine, temp;
//    stringstream inputLineStream;
//    vector<vector<char>> m = {};
//    vector<char> parsedInput;
//    map<char, pair<int, int>> directions = { {'>', {1, 0}}, {'v', {0, 1}}, {'^', {0, -1}}, {'<', {-1, 0}} };
//    long long output = 0, curX = 0, curY = 0, boxX = 0, boxY = 0;
//    if (input.is_open()) {
//        while (getline(input, inputLine) && inputLine.size() != 0) {
//            m.push_back(vector<char>(inputLine.begin(), inputLine.end()));
//        }
//        for (int y = 0; y < m.size(); y++) {
//            for (int x = 0; x < m[0].size(); x++) {
//                if (m[y][x] == '@') {
//                    m[y][x] = '.';
//                    curX = x;
//                    curY = y;
//                }
//            }
//        }
//        while (getline(input, inputLine)) {
//            parsedInput = vector<char>(inputLine.begin(), inputLine.end());
//            for (char c : parsedInput) {
//                if (m[curY + directions[c].second][curX + directions[c].first] == '#') continue;
//                if (m[curY + directions[c].second][curX + directions[c].first] == '.') {
//                    curY += directions[c].second;
//                    curX += directions[c].first;
//                    continue;
//                }
//                boxX = curX + directions[c].first;
//                boxY = curY + directions[c].second;
//                while (m[boxY][boxX] != '#') {
//                    if (m[boxY][boxX] == '.') {
//                        m[curY + directions[c].second][curX + directions[c].first] = '.';
//                        m[boxY][boxX] = 'O';
//                        curY += directions[c].second;
//                        curX += directions[c].first;
//                        break;
//                    }
//                    else {
//                        boxX += directions[c].first;
//                        boxY += directions[c].second;
//                    }
//                }
//                
//            }
//        }
//    }
//    input.close();
//    for (int y = 1; y < m.size() - 1; y++) {
//        for (int x = 1; x < m[0].size() - 1; x++) {
//            if (m[y][x] == 'O') {
//                output += 100 * y + x;
//            }
//        }
//    }
//    cout << output;
//}