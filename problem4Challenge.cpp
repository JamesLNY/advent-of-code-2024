//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> map;
//pair<int, int> directions[] = { {1, 1}, {1, -1}, {-1, -1}, {-1, 1} };
//
//
//int main() {
//    ifstream input("input4.txt");
//    string temp;
//    vector<char> diagonals;
//    int output = 0;
//    if (input.is_open()) {
//        while (input.good()) {
//            input >> temp;
//            map.push_back(temp);
//        }
//    }
//    input.close();
//    for (int column = 1; column < map[0].size() - 1; column++) {
//        for (int row = 1; row < map.size() - 1; row++) {
//            if (map[row][column] == 'A') {
//                diagonals.clear();
//                for (int i = 0; i < 4; i++) {
//                    diagonals.push_back(map[row + directions[i].first][column + directions[i].second]);
//                }
//                if (count(diagonals.begin(), diagonals.end(), 'S') != 2) continue;
//                if (count(diagonals.begin(), diagonals.end(), 'M') != 2) continue;
//                if (diagonals[0] == diagonals[2]) continue;
//                output++;
//            }
//        }
//    }
//    cout << output;
////}