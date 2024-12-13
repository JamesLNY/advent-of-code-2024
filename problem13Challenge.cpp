//#include <iostream>
//#include <fstream>
//#include <string>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//long long solve(pair<long long, long long> deltaX, pair<long long, long long> deltaY, pair<long long, long long> goal) {
//    long long answer = 0;
//    long long tempB = deltaX.second * deltaY.first - deltaY.second * deltaX.first;
//    if (tempB == 0) return 0;
//    long long tempA = goal.first * deltaY.first - goal.second * deltaX.first;
//    if (tempA % tempB != 0) return 0;
//    answer += tempA / tempB;
//    tempB = deltaX.first * deltaY.second - deltaX.second * deltaY.first;
//    tempA = goal.first * deltaY.second - goal.second * deltaX.second;
//    if (tempA % tempB != 0) return 0;
//    answer += tempA / tempB * 3ll;
//    return answer;
//}
//
//int main() {
//    ifstream input("input13.txt");
//    string inputLine;
//    pair<long long, long long> deltaX = { 0, 0 }, deltaY = { 0, 0 }, goal = { 0, 0 };
//    long long output = 0;
//    if (input.is_open()) {
//        while (input.good()) {
//            input >> inputLine >> inputLine >> inputLine;
//            deltaX.first = stoll(inputLine.substr(2, inputLine.size() - 3));
//            input >> inputLine;
//            deltaY.first = stoll(inputLine.substr(2));
//            input >> inputLine >> inputLine >> inputLine;
//            deltaX.second = stoll(inputLine.substr(2, inputLine.size() - 3));
//            input >> inputLine;
//            deltaY.second = stoll(inputLine.substr(2));
//            input >> inputLine >> inputLine;
//            goal.first = stoll(inputLine.substr(2, inputLine.size() - 3)) + 10000000000000ll;
//            input >> inputLine;
//            goal.second = stoll(inputLine.substr(2)) + 10000000000000ll;
//            output += solve(deltaX, deltaY, goal);
//        }
//    }
//    input.close();
//    cout << output;
//}