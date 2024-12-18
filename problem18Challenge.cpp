//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include <queue>
//
//using namespace std;
//
//int main() {
//    ifstream input("input18.txt");
//    string inputLine;
//    stringstream inputLineStream;
//    vector<int> parsedInput, current;
//    pair<int, int> directions[] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} };
//    vector<vector<int>> coordinates = {};
//    bool map[71][71] = { false };
//    int output;
//    if (input.is_open()) {
//        while (getline(input, inputLine)) {            
//            parsedInput.clear();
//            inputLineStream.clear();
//            inputLineStream.str(inputLine);
//            while (getline(inputLineStream, inputLine, ',')) parsedInput.push_back(stoi(inputLine));
//            coordinates.push_back(parsedInput);
//        }
//    }
//    input.close();
//    for (int i = 1024; i < coordinates.size(); i++) {
//        map[coordinates[i][1]][coordinates[i][0]] = true;
//        queue<vector<int>> bfs;
//        int visited[71][71] = { false };
//        bfs.push({ 0, 0, 0 });
//        while (!bfs.empty() && (bfs.front()[0] != 70 || bfs.front()[1] != 70)) {
//            current = bfs.front();
//            bfs.pop();
//            if (current[1] < 0 || current[1] >= 71 || current[0] < 0 || current[0] >= 71) continue;
//            if (map[current[1]][current[0]]) continue;
//            if (visited[current[1]][current[0]]) continue;
//            visited[current[1]][current[0]] = true;
//            for (pair<int, int> direction : directions) {
//                bfs.push({ current[0] + direction.first, current[1] + direction.second, current[2] + 1 });
//            }
//        }
//        if (bfs.empty()) {
//            cout << coordinates[i][0] << "," << coordinates[i][1];
//            break;
//        }
//    }
// }