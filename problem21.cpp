//#include <vector>
//#include <fstream>
//#include <iostream>
//#include <string>
//#include <map>
//#include <queue>
//
//using namespace std;
//
//pair<int, int> numericKeypad[] = { {1, 3}, { 0, 2 }, {1, 2}, {2, 2}, {0, 1}, {1, 1}, {2, 1}, {0, 0}, {1, 0}, {2, 0}, {2, 3} };
//map<char, pair<int, int>> directionalKeypad = { {'^', {1, 0} }, {'v', {1, 1}}, {'<', {0, 1}}, {'>', {2, 1}}, {'A', {2, 0}} };
//
//map<string, int> optimization;
//
//vector<string> numericGrid = { "789", "456", "123", "#0A" };
//
//map<char, pair<int, int>> directions = { {'^', {0, -1}}, {'>', {1, 0}}, {'v', {0, 1}}, {'<', {-1, 0}} };
//
//vector<string> findPossibleNumericSequences(pair<int, int> start, pair<int, int> end) {
//	int currentMin = -1;
//	queue<pair<string, pair<int, int>>> bfs;
//	bfs.push({ "", start });
//	vector<string> output;
//	pair<string, pair<int, int>> current;
//	while (!bfs.empty()) {
//		current = bfs.front();
//		bfs.pop();
//		if (currentMin != -1 && current.first.size() > currentMin) continue;
//		if (current.second.second > 3 || current.second.second < 0 || current.second.first >= 3 || current.second.first < 0) continue;
//		if (numericGrid[current.second.second][current.second.first] == '#') continue;
//		if (current.second.first == end.first && current.second.second == end.second) {
//			if (currentMin == -1) currentMin = current.first.size();
//			output.push_back(current.first + "A");
//		}
//		for (pair<char, pair<int, int>> direction : directions) {
//			bfs.push({ current.first + direction.first, {current.second.first + direction.second.first, current.second.second + direction.second.second} });
//		}
//	}
//	return output;
//}
//
//vector<string> directionalGrid = {"#^A", "<v>"};
//
//vector<string> findPossibleDirectionalSequences(pair<int, int> start, pair<int, int> end) {
//	int currentMin = -1;
//	queue<pair<string, pair<int, int>>> bfs;
//	bfs.push({ "", start });
//	vector<string> output;
//	pair<string, pair<int, int>> current;
//	while (!bfs.empty()) {
//		current = bfs.front();
//		bfs.pop();
//		if (currentMin != -1 && current.first.size() > currentMin) continue;
//		if (current.second.second > 1 || current.second.second < 0 || current.second.first >= 3 || current.second.first < 0) continue;
//		if (directionalGrid[current.second.second][current.second.first] == '#') continue;
//		if (current.second.first == end.first && current.second.second == end.second) {
//			if (currentMin == -1) currentMin = current.first.size();
//			output.push_back(current.first + 'A');
//		}
//		for (pair<char, pair<int, int>> direction : directions) {
//			bfs.push({ current.first + direction.first, {current.second.first + direction.second.first, current.second.second + direction.second.second} });
//		}
//	}
//	return output;
//}
//
//string getDirectionalSequence(string sequence, bool cycleOne) {
//	string output, current;
//	int x = 2, y = 0, currentMin = -1;
//	string currentMinSequence;
//	pair<int, int> destination;
//	for (char c : sequence) {
//		currentMin = -1;
//		destination = directionalKeypad[c];
//		vector<string> paths = findPossibleDirectionalSequences({ x, y }, destination);
//		if (paths.empty()) cout << x << "," << y << c << endl;
//		if (cycleOne) {
//			for (string path : paths) {
//				current = getDirectionalSequence(path, false);
//				if (current.size() < currentMin || currentMin == -1) {
//					currentMin = current.size();
//					currentMinSequence = path;
//				}
//			}
//			output += currentMinSequence;
//		}
//		else {
//			output += paths[0];
//		}
//		x = destination.first;
//		y = destination.second;
//	}
//	return output;
//}
//
//string getNumericSequence(string code) {
//	string output, current;
//	int x = 2, y = 3, currentMin = -1;
//	string currentMinSequence;
//	pair<int, int> destination;
//	for (char c : code) {
//		currentMin = -1;
//		destination = c == 'A' ? numericKeypad[10] : numericKeypad[c - '0'];
//		vector<string> paths = findPossibleNumericSequences({ x, y }, destination);
//		for (string path : paths) {
//			current = getDirectionalSequence(getDirectionalSequence(path, false), true);
//			if (current.size() < currentMin || currentMin == -1) {
//				currentMin = current.size();
//				currentMinSequence = path;
//			}
//		}
//		output += currentMinSequence;
//		x = destination.first;
//		y = destination.second;
//	}
//	return output;
//}
//
//int main() {
//	fstream input("input21.txt");
//	string inputLine, parsedInput;
//	int output = 0;
//	if (input.is_open()) {
//		while (input >> inputLine) {
//			parsedInput = getDirectionalSequence(getDirectionalSequence(getNumericSequence(inputLine), true), false);
//			cout << parsedInput.size() << "," << stoi(inputLine.substr(0, inputLine.size() - 1)) << endl;
//			output += (int) parsedInput.size() * stoi(inputLine.substr(0, inputLine.size() - 1));
//		}
//	}
//	cout << output;
//}