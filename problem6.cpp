//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    ifstream input("input6.txt");
//    string inputLine;
//    vector<string> map;
//    pair<int, int> directions[] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} };
//    int x = 0, y = 0, output = 0, direction = 0;
//    if (input.is_open()) {
//        while (getline(input, inputLine)) map.push_back(inputLine);
//    }
//    input.close();
//    for (int i = 0; i < map.size(); i++) {
//        for (int n = 0; n < map[0].size(); n++) {
//            if (map[i][n] == '^') {
//                x = n;
//                y = i;
//            }
//        }
//    }
//    vector<vector<bool>> visited(map.size(), vector<bool>(map[0].size(), false));
//    while (x >= 0 && y >= 0 && x < map[0].size() && y < map.size()) {
//        if (map[y][x] == '#') {
//            x -= directions[direction].first;
//            y -= directions[direction].second;
//            direction = (direction + 1) % 4;
//        }
//        else {
//            visited[y][x] = true;
//        }
//        x += directions[direction].first;
//        y += directions[direction].second;
//    }
//    for (vector<bool> v : visited) {
//        for (bool b : v) {
//            if (b) output++;
//        }
//    }
//    cout << output;
//}