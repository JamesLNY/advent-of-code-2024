//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <set>
//
//using namespace std;
//
//vector<vector<char>> m = {};
//
//bool canMove(pair<int, int> direction, int x, int y) {
//    if (m[y][x] == ']') x--;
//    if (direction.second == 0) {
//        if (direction.first == -1) {
//            if (m[y][x - 1] == ']') return canMove(direction, x - 2, y);
//            if (m[y][x - 1] == '#') return false;
//        }
//        else {
//            if (m[y][x + 2] == '[') return canMove(direction, x + 2, y);
//            if (m[y][x + 2] == '#') return false;
//        }
//        return true;
//    }
//    else {
//        if (m[y + direction.second][x] == '#' || m[y + direction.second][x + 1] == '#') return false;
//        if (m[y + direction.second][x] == '.' && m[y + direction.second][x + 1] == '.') return true;
//        vector<bool> returnValues = {};
//        if (m[y + direction.second][x] == ']') returnValues.push_back(canMove(direction, x - 1, y + direction.second));
//        if (m[y + direction.second][x + 1] == '[') returnValues.push_back(canMove(direction, x + 1, y + direction.second));
//        if (m[y + direction.second][x] == '[') returnValues.push_back(canMove(direction, x, y + direction.second));
//        return count(returnValues.begin(), returnValues.end(), false) == 0;
//    }
//}
//
//void moveBox(pair<int, int> direction, int x, int y) {
//    if (m[y][x] == ']') x--;
//    if (direction.second == 0) {
//        if (direction.first == -1) {
//            if (m[y][x - 1] == ']') moveBox(direction, x - 1, y);
//            m[y][x - 1] = '[';
//            m[y][x] = ']';
//            m[y][x + 1] = '.';
//        }
//        else {
//            if (m[y][x + 2] == '[') moveBox(direction, x + 2, y);
//            m[y][x + 2] = ']';
//            m[y][x + 1] = '[';
//            m[y][x] = '.';
//        }
//    }
//    else {
//        if (m[y + direction.second][x] == ']') moveBox(direction, x - 1, y + direction.second);
//        if (m[y + direction.second][x + 1] == '[') moveBox(direction, x + 1, y + direction.second);
//        if (m[y + direction.second][x] == '[') moveBox(direction, x, y + direction.second);
//        m[y + direction.second][x] = '[';
//        m[y + direction.second][x + 1] = ']';
//        m[y][x] = '.';
//        m[y][x + 1] = '.';
//    }
//}
//
//int main() {
//    ifstream input("input15.txt");
//    string inputLine, temp;
//    stringstream inputLineStream;
//    vector<char> parsedInput;
//    map<char, pair<int, int>> directions = { {'>', {1, 0}}, {'v', {0, 1}}, {'^', {0, -1}}, {'<', {-1, 0}} };
//    map<char, pair<int, int>> playerDirections = { {'>', {1, 0}}, {'v', {0, 1}}, {'^', {0, -1}}, {'<', {-1, 0}} };
//    long long output = 0, curX = 0, curY = 0, boxX = 0, boxY = 0;
//    if (input.is_open()) {
//        while (getline(input, inputLine) && inputLine.size() != 0) {
//            m.push_back({});
//            for (char c : inputLine) {
//                if (c == 'O') {
//                    m.back().push_back('[');
//                    m.back().push_back(']');
//                    continue;
//                }
//                m.back().push_back(c);
//                m.back().push_back(c);
//            }
//        }
//        for (int y = 0; y < m.size(); y++) {
//            for (int x = 0; x < m[0].size(); x++) {
//                if (m[y][x] == '@') {
//                    m[y][x] = '.';
//                    m[y][x + 1] = '.';
//                    curX = x;
//                    curY = y;
//                }
//            }
//        }
//        while (getline(input, inputLine)) {
//            parsedInput = vector<char>(inputLine.begin(), inputLine.end());
//            for (char c : parsedInput) {
//                if (m[curY + playerDirections[c].second][curX + playerDirections[c].first] == '#') continue;
//                if (m[curY + playerDirections[c].second][curX + playerDirections[c].first] == '.') {
//                    curY += playerDirections[c].second;
//                    curX += playerDirections[c].first;
//                    continue;
//                }
//                if (canMove(directions[c], curX + playerDirections[c].first, curY + playerDirections[c].second)) {
//                    moveBox(directions[c], curX + playerDirections[c].first, curY + playerDirections[c].second);
//                    curY += playerDirections[c].second;
//                    curX += playerDirections[c].first;
//                };
//            }
//        }
//    }
//    input.close();
//    for (int y = 1; y < m.size() - 1; y++) {
//        for (int x = 1; x < m[0].size() - 1; x++) {
//            if (m[y][x] == '[') {
//                output += 100 * y + x;
//            }
//        }
//    }
//    cout << output;
//}