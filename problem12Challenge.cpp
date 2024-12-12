//#include <iostream>
//#include <fstream>
//#include <string>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    ifstream input("input12.txt");
//    string inputLine;
//    vector<string> map;
//    long long output = 0, perimeter, area;
//    char originalElement;
//    if (input.is_open()) {
//        while (input >> inputLine) {
//            map.push_back(" " + inputLine + " ");
//        }
//    }
//    map.insert(map.begin(), string(map[0].size(), ' '));
//    map.insert(map.end(), string(map[0].size(), ' '));
//    vector<vector<bool>> visited(map.size(), vector<bool>(map[0].size(), false));
//    queue<pair<int, int>> bfs;
//    pair<int, int> element, directions[] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }, corners[] = { {1, 1}, {1, -1}, {-1, -1}, {-1, 1} };
//    for (int y = 1; y < visited.size() - 1; y++) {
//        for (int x = 1; x < visited[0].size() - 1; x++) {
//            if (!visited[y][x]) {
//                originalElement = map[y][x];
//                perimeter = 0;
//                area = 0;
//                bfs.push({ x, y });
//                while (!bfs.empty()) {
//                    element = bfs.front();
//                    bfs.pop();
//                    if (element.first < 0 || element.first >= map[0].size() || element.second < 0 || element.second >= map.size()) continue;
//                    if (map[element.second][element.first] != originalElement) continue;
//                    if (visited[element.second][element.first]) continue;
//                    visited[element.second][element.first] = true;
//                    area++;
//                    for (int i = 0; i < 4; i++) {
//                        if (map[element.second + directions[i].second][element.first + directions[i].first] != originalElement &&
//                            map[element.second + directions[(i + 1) % 4].second][element.first + directions[(i + 1) % 4].first] != originalElement) {
//                            perimeter++;
//                        }
//                        if (map[element.second + directions[i].second][element.first + directions[i].first] == originalElement &&
//                            map[element.second + directions[(i + 1) % 4].second][element.first + directions[(i + 1) % 4].first] == originalElement &&
//                            map[element.second + corners[i].second][element.first + corners[i].first] != originalElement) {
//                            perimeter++;
//                        }
//                        bfs.push({ element.first + directions[i].first, element.second + directions[i].second });
//                    }
//                }
//                output += perimeter * area;
//            }
//        }
//    }
//    cout << output;
//}