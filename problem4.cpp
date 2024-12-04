//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> map;
//int output = 0;
//string word = "XMAS";
//pair<int, int> directions[] = { {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1} };
//
//void check(int direction, pair<int, int> coordinates, int position) {
//    if (coordinates.first < 0 || coordinates.first >= map[0].size()) return;
//    if (coordinates.second < 0 || coordinates.second >= map.size()) return;
//    if (map[coordinates.first][coordinates.second] != word[position]) return;
//    if (position == 3) {
//        output++;
//        return;
//    }
//    check(direction, { coordinates.first + directions[direction].first, coordinates.second + directions[direction].second }, position + 1);
//}
//
//
//int main() {
//    ifstream input("input4.txt");
//    string temp;
//    if (input.is_open()) {
//        while (input.good()) {
//            input >> temp;
//            map.push_back(temp);
//        }
//    }
//    input.close();
//    for (int column = 0; column < map[0].size(); column++) {
//        for (int row = 0; row < map.size(); row++) {
//            if (map[row][column] == 'X') {
//                for (int i = 0; i < 8; i++) {
//                    check(i, { row, column }, 0);
//                }
//            }
//        }
//    }
//    cout << output;
//}