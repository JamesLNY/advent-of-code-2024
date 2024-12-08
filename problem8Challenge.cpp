//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//int main() {
//    ifstream input("input8.txt");
//    string inputLine;
//    vector<string> grid;
//    map<char, vector<pair<int, int>>> antennas;
//    pair<int, int> possibleNode;
//    int output = 0, dx, dy;
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
//        if (antennaType.second.size() > 1) {
//            for (int i = 0; i < antennaType.second.size(); i++) {
//                antinodes[antennaType.second[i].second][antennaType.second[i].first] = true;
//            }
//        }
//        for (int i = 0; i < antennaType.second.size() - 1; i++) {
//            for (int n = i + 1; n < antennaType.second.size(); n++) {
//                dx = antennaType.second[n].first - antennaType.second[i].first;
//                dy = antennaType.second[n].second - antennaType.second[i].second;
//                possibleNode = { antennaType.second[i].first - dx, antennaType.second[i].second - dy };
//                while (possibleNode.first >= 0 && possibleNode.first < grid[0].size() && possibleNode.second >= 0 && possibleNode.second < grid.size()) {
//                    antinodes[possibleNode.second][possibleNode.first] = true;
//                    possibleNode.first -= dx;
//                    possibleNode.second -= dy;
//                }
//                possibleNode = { antennaType.second[n].first + dx, antennaType.second[n].second + dy };
//                while (possibleNode.first >= 0 && possibleNode.first < grid[0].size() && possibleNode.second >= 0 && possibleNode.second < grid.size()) {
//                    antinodes[possibleNode.second][possibleNode.first] = true;
//                    possibleNode.first += dx;
//                    possibleNode.second += dy;
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