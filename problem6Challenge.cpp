//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//pair<int, int> directions[] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} };
//int startingX = 0, startingY = 0;
//
//bool isLoop(vector<string> map) {
//    int x = startingX, y = startingY, direction = 0;
//    vector<vector<int>> visited(map.size(), vector<int>(map[0].size(), 5));
//    while (x >= 0 && y >= 0 && x < map[0].size() && y < map.size()) {
//        if (visited[y][x] == direction) return true;
//        if (map[y][x] == '#') {
//            x -= directions[direction].first;
//            y -= directions[direction].second;
//            direction = (direction + 1) % 4;
//        }
//        else {
//            visited[y][x] = direction;
//        }
//        x += directions[direction].first;
//        y += directions[direction].second;
//    }
//    return false;
//}
//
//int main() {
//    ifstream input("input6.txt");
//    string inputLine;
//    vector<string> map, newMap;
//    int x = 0, y = 0, output = 0, direction = 0;
//    if (input.is_open()) {
//        while (getline(input, inputLine)) map.push_back(inputLine);
//    }
//    input.close();
//    for (int i = 0; i < map.size(); i++) {
//        for (int n = 0; n < map[0].size(); n++) {
//            if (map[i][n] == '^') {
//                startingX = n;
//                startingY = i;
//            }
//        }
//    }
//    x = startingX;
//    y = startingY;
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
//    for (int i = 0; i < map.size(); i++) {
//        for (int n = 0; n < map[0].size(); n++) {
//            if (visited[i][n]) {
//                newMap = map;
//                newMap[i][n] = '#';
//                if (isLoop(newMap)) output++;
//            }
//        }
//    }
//    cout << output;
//}