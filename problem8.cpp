//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//vector<pair<int, int>> findAntinodes(pair<int, int> pointA, pair<int, int> pointB) {
//    int dx = pointB.first - pointA.first, dy = pointB.second - pointA.second;
//    return { {pointA.first - dx, pointA.second - dy}, {pointB.first + dx, pointB.second + dy} };
//}
//
//int main() {
//    ifstream input("input8.txt");
//    string inputLine;
//    vector<string> grid;
//    map<char, vector<pair<int, int>>> antennas;
//    int output = 0;
//    if (input.is_open()) {
//        while (getline(input, inputLine)) grid.push_back(inputLine);
//    }
//    input.close();
//    for (int i = 0; i < grid.size(); i++) {
//        for (int n = 0; n < grid[0].size(); n++) {
//            if (grid[i][n] != '.') {
//                if (antennas.count(grid[i][n]) == 0) {
//                    antennas[grid[i][n]] = { {n, i} };
//                }
//                else {
//                    antennas[grid[i][n]].push_back({ n, i });
//                }
//            }
//        }
//    }
//    vector<vector<bool>> antinodes(grid.size(), vector<bool>(grid[0].size(), false));
//    for (pair<char, vector<pair<int, int>>> antennaType : antennas) {
//        for (int i = 0; i < antennaType.second.size() - 1; i++) {
//            for (int n = i + 1; n < antennaType.second.size(); n++) {
//                for (pair<int, int> p : findAntinodes(antennaType.second[i], antennaType.second[n])) {
//                    if (p.first < 0 || p.first >= grid[0].size() || p.second < 0 || p.second >= grid.size()) continue;
//                    antinodes[p.second][p.first] = true;
//                }
//            }
//        }
//    }
//    for (vector<bool> v : antinodes) {
//        for (bool b : v) {
//            if (b) output++;
//        }
//    }
//    cout << output;
//}