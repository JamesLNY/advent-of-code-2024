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
//            map.push_back(inputLine);
//        }
//    }
//    vector<vector<bool>> visited(map.size(), vector<bool>(map[0].size(), false));
//    queue<pair<int, int>> bfs;
//    pair<int, int> element, directions[] = { {1, 0}, {0, -1}, {-1, 0}, {0, 1} };
//    for (int y = 0; y < visited.size(); y++) {
//        for (int x = 0; x < visited[0].size(); x++) {
//            if (!visited[y][x]) {
//                originalElement = map[y][x];
//                perimeter = 0;
//                area = 0;
//                bfs.push({ x, y });
//                while (!bfs.empty()) {
//                    element = bfs.front();
//                    bfs.pop();
//                    if (element.first < 0 || element.first >= map[0].size() || element.second < 0 || element.second >= map.size()) {
//                        perimeter++;
//                        continue;
//                    }
//                    if (map[element.second][element.first] != originalElement) {
//                        perimeter++;
//                        continue;
//                    }
//                    if (visited[element.second][element.first]) continue;
//                    visited[element.second][element.first] = true;
//                    area++;
//                    for (pair<int, int> p : directions) {
//                        bfs.push({ element.first + p.first, element.second + p.second });
//                    }
//                }
//                output += perimeter * area;
//            }
//        }
//    }
//    cout << output;
//}