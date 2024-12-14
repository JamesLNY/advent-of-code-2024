//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//
//using namespace std;
//
//int main() {
//    ifstream input("input14.txt");
//    string inputLine, temp;
//    stringstream inputLineStream;
//    int width = 101, height = 103, seconds = 100, x, y;
//    vector<string> grid(height, string(width, ' '));
//    vector<int> parsedInput;
//    vector<vector<int>> directions;
//    if (input.is_open()) {
//        while (input.good()) {
//            parsedInput.clear();
//            for (int n = 0; n < 2; n++) {
//                input >> inputLine;
//                inputLineStream.clear();
//                inputLineStream.str(inputLine.substr(2));
//                for (int i = 0; i < 2; i++) {
//                    getline(inputLineStream, temp, ',');
//                    parsedInput.push_back(stoi(temp));
//                }
//            }
//            directions.push_back(parsedInput);
//        }
//    }
//    input.close();
//    for (int i = 1; true; i++) {
//        grid = vector<string>(height, string(width, ' '));
//        for (vector<int> v : directions) {
//            x = (((v[0] + v[2] * i) % width) + width) % width;
//            y = (((v[1] + v[3] * i) % height) + height) % height;
//            grid[y][x] = '1';
//        }
//        for (string s : grid) {
//            if (s.find(string(31, '1')) != string::npos) {
//                cout << i << endl;
//                for (string ss : grid) {
//                    cout << ss << endl;
//                }
//                return 1;
//            }
//        }
//    }
//}