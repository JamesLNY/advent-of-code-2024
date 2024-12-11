//#include <iostream>
//#include <fstream>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//int main() {
//    ifstream input("input11.txt");
//    int inputLine;
//    queue<pair<string, int>> bfs;
//    int output = 0;
//    if (input.is_open()) {
//        while (input >> inputLine) {
//            bfs.push({ to_string(inputLine), 0 });
//        }
//        while (!bfs.empty()) {
//            if (bfs.front().second == 25) output++;
//            else if (stoll(bfs.front().first) == 0) {
//                bfs.push({ "1", bfs.front().second + 1 });
//            }
//            else if (bfs.front().first.size() % 2 == 0) {
//                bfs.push({ to_string(stoll(bfs.front().first.substr(0, bfs.front().first.size() / 2))), bfs.front().second + 1 });
//                bfs.push({ to_string(stoll(bfs.front().first.substr(bfs.front().first.size() / 2, bfs.front().first.size() / 2))), bfs.front().second + 1 });
//            }
//            else {
//                bfs.push({ to_string(stoll(bfs.front().first) * 2024ll), bfs.front().second + 1 });
//            }
//            bfs.pop();
//        }
//    }
//    cout << output;
//}