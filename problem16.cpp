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
//    vector<string> grid = {};
//    pair<int, int> directions[] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
//    if (input.is_open()) {
//        while (getline(input, inputLine)) grid.push_back(inputLine);
//    }
//    input.close();
//    // x, y, direction, points
//    vector<int> current = {1, (int) grid.size() - 2, 1, 0};
//    queue<vector<int>> bfs;
//    bfs.push(current);
//    vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));
//    while (!bfs.empty()) {
//        current = bfs.front();
//        bfs.pop();
//        if (grid[current[1]][current[0]] == '#') continue;
//        if (visited[current[1]][current[0]] <= current[3] && visited[current[1]][current[0]] != 0) continue;
//        visited[current[1]][current[0]] = current[3];
//        for (int direction : {(current[2] + 1) % 4, (current[2] + 3) % 4}) {
//            bfs.push({ current[0] + directions[direction].first, current[1] + directions[direction].second, direction, current[3] + 1001 });
//        }
//        bfs.push({ current[0] + directions[current[2]].first, current[1] + directions[current[2]].second, current[2], current[3] + 1 });
//    }
//    cout << visited[1][grid[0].size() - 2];
//}