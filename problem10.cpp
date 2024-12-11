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
//    vector<vector<bool>> visited = vector<vector<bool>>(map.size(), vector<bool>(map[0].size(), false));
//    input.close();
//    for (int y = 0; y < map.size(); y++) {
//        for (int x = 0; x < map[0].size(); x++) {
//            if (map[y][x] == '0') {
//                count = 0;
//                visited = vector<vector<bool>>(map.size(), vector<bool>(map[0].size(), false));
//                q.push({ {x, y}, 0 });
//                while (!q.empty()) {
//                    curCoor = q.front();
//                    q.pop();
//                    if (curCoor.first.first < 0 || curCoor.first.first >= map[0].size()) continue;
//                    if (curCoor.first.second < 0 || curCoor.first.second >= map.size()) continue;
//                    if (visited[curCoor.first.second][curCoor.first.first]) continue;
//                    if (curCoor.second != map[curCoor.first.second][curCoor.first.first] - '0') continue;
//                    visited[curCoor.first.second][curCoor.first.first] = true;
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