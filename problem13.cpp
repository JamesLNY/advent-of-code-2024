//#include <iostream>
//#include <fstream>
//#include <string>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solve(pair<int, int> deltaX, pair<int, int> deltaY, pair<int, int> goal) {
//    int answer = 0;
//    int tempB = deltaX.second * deltaY.first - deltaY.second * deltaX.first;
//    if (tempB == 0) return 0;
//    int tempA = goal.first * deltaY.first - goal.second * deltaX.first;
//    if (tempA % tempB != 0) return 0;
//    answer += tempA / tempB;
//    tempB = deltaX.first * deltaY.second - deltaX.second * deltaY.first;
//    tempA = goal.first * deltaY.second - goal.second * deltaX.second;
//    if (tempA % tempB != 0) return 0;
//    answer += tempA / tempB * 3;
//    return answer;
//}
//
//int main() {
//    ifstream input("input13.txt");
//    string inputLine;
//    pair<int, int> deltaX = { 0, 0 }, deltaY = { 0, 0 }, goal = { 0, 0 };
//    int output = 0;
//    if (input.is_open()) {
//        while (input.good()) {
//            input >> inputLine >> inputLine >> inputLine;
//            deltaX.first = stoi(inputLine.substr(2, inputLine.size() - 3));
//            input >> inputLine;
//            deltaY.first = stoi(inputLine.substr(2));
//            input >> inputLine >> inputLine >> inputLine;
//            deltaX.second = stoi(inputLine.substr(2, inputLine.size() - 3));
//            input >> inputLine;
//            deltaY.second = stoi(inputLine.substr(2));
//            input >> inputLine >> inputLine;
//            goal.first = stoi(inputLine.substr(2, inputLine.size() - 3));
//            input >> inputLine;
//            goal.second = stoi(inputLine.substr(2));
//            output += solve(deltaX, deltaY, goal);
//        }
//    }
//    input.close();
//    cout << output;
//}