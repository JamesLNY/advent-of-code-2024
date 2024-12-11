//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int main() {
//    ifstream input("input10.txt");
//    string inputLine;
//    vector<string> map;
//    queue<pair<pair<int, int>, int>> q;
//    pair<pair<int, int>, int> curCoor;
//    pair<int, int> directions[] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} };
//    int output = 0, count = 0;
//    if (input.is_open()) {
//        while (getline(input, inputLine)) map.push_back(inputLine);
//    }
//    input.close();
//    for (int y = 0; y < map.size(); y++) {
//        for (int x = 0; x < map[0].size(); x++) {
//            if (map[y][x] == '0') {
//                count = 0;
//                q.push({ {x, y}, 0 });
//                while (!q.empty()) {
//                    curCoor = q.front();
//                    q.pop();
//                    if (curCoor.first.first < 0 || curCoor.first.first >= map[0].size()) continue;
//                    if (curCoor.first.second < 0 || curCoor.first.second >= map.size()) continue;
//                    if (curCoor.second != map[curCoor.first.second][curCoor.first.first] - '0') continue;
//                    if (curCoor.second == 9) {
//                        count++;
//                        continue;
//                    }
//                    for (int i = 0; i < 4; i++) {
//                        q.push({ { curCoor.first.first + directions[i].first, curCoor.first.second + directions[i].second }, curCoor.second + 1 });
//                    }
//                }
//                output += count;
//            }
//        }
//    }
//    cout << output;
//}