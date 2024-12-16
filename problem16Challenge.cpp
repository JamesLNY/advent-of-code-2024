//#include <queue>
//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    ifstream input("input16.txt");
//    string inputLine;
//    int currentMax = 0, output = 0;
//    vector<string> grid = {};
//    pair<int, int> directions[] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} };
//    if (input.is_open()) {
//        while (getline(input, inputLine)) grid.push_back(inputLine);
//    }
//    input.close();
//    // x, y, direction, points
//    vector<int> current = { 1, (int)grid.size() - 2, 1, 0 };
//    queue<vector<int>> bfs;
//    bfs.push(current);
//    vector<vector<vector<int>>> visited(grid.size(), vector<vector<int>>(grid[0].size(), vector<int>(4, 0)));
//    queue<vector<pair<int, int>>> paths;
//    vector<vector<pair<int, int>>> totalPaths;
//    paths.push({ {1, (int)grid.size() - 2} });
//    vector<pair<int, int>> path;
//    while (!bfs.empty()) {
//        current = bfs.front();
//        path = paths.front();
//        bfs.pop();
//        paths.pop();
//        if (grid[current[1]][current[0]] == '#') continue;
//        if (visited[current[1]][current[0]][current[2]] < current[3] && visited[current[1]][current[0]][current[2]] != 0) continue;
//        visited[current[1]][current[0]][current[2]] = current[3];
//        path.push_back({ current[0], current[1] });
//        if (grid[current[1]][current[0]] == 'E') {
//            if (currentMax == 0 || current[3] < currentMax) {
//                currentMax = current[3];
//                totalPaths.clear();
//                totalPaths.push_back(path);
//            }
//            else if (current[3] == currentMax) {
//                totalPaths.push_back(path);
//            }
//            continue;
//        }
//        for (int direction : {(current[2] + 1) % 4, (current[2] + 3) % 4}) {
//            bfs.push({ current[0] + directions[direction].first, current[1] + directions[direction].second, direction, current[3] + 1001 });
//            paths.push(path);
//        }
//        bfs.push({ current[0] + directions[current[2]].first, current[1] + directions[current[2]].second, current[2], current[3] + 1 });
//        paths.push(path);
//    }
//    vector<vector<bool>> bestPath(grid.size(), vector<bool>(grid[0].size(), false));
//    for (vector<pair<int, int>> path : totalPaths) {
//        for (pair<int, int> p : path) {
//            bestPath[p.second][p.first] = true;
//        }
//    }
//    for (vector<bool> v : bestPath) {
//        for (bool b : v) {
//            if (b) output++;
//        }
//    }
//    cout << output;
//}