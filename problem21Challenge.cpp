//#include <vector>
//#include <fstream>
//#include <iostream>
//#include <string>
//#include <map>
//#include <queue>
//
//using namespace std;
//
//pair<long long, long long> numericKeypad[] = { {1, 3}, { 0, 2 }, {1, 2}, {2, 2}, {0, 1}, {1, 1}, {2, 1}, {0, 0}, {1, 0}, {2, 0}, {2, 3} };
//map<char, pair<long long, long long>> directionalKeypad = { {'^', {1, 0} }, {'v', {1, 1}}, {'<', {0, 1}}, {'>', {2, 1}}, {'A', {2, 0}} };
//
//map<string, long long> optimization;
//
//vector<string> numericGrid = { "789", "456", "123", "#0A" };
//
//map<char, pair<long long, long long>> directions = { {'^', {0, -1}}, {'>', {1, 0}}, {'v', {0, 1}}, {'<', {-1, 0}} };
//
//vector<string> findPossibleNumericSequences(pair<long long, long long> start, pair<long long, long long> end) {
//	long long currentMin = -1;
//	queue<pair<string, pair<long long, long long>>> bfs;
//	bfs.push({ "", start });
//	vector<string> output;
//	pair<string, pair<long long, long long>> current;
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
//		for (pair<char, pair<long long, long long>> direction : directions) {
//			bfs.push({ current.first + direction.first, {current.second.first + direction.second.first, current.second.second + direction.second.second} });
//		}
//	}
//	return output;
//}
//
//vector<string> directionalGrid = { "#^A", "<v>" };
//
//vector<string> findPossibleDirectionalSequences(pair<long long, long long> start, pair<long long, long long> end) {
//	long long currentMin = -1;
//	queue<pair<string, pair<long long, long long>>> bfs;
//	bfs.push({ "", start });
//	vector<string> output;
//	pair<string, pair<long long, long long>> current;
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
//		for (pair<char, pair<long long, long long>> direction : directions) {
//			bfs.push({ current.first + direction.first, {current.second.first + direction.second.first, current.second.second + direction.second.second} });
//		}
//	}
//	return output;
//}
//
//long long storage[3][2][3][2][25] = {0};
//
//long long getDirectionalSequence(string sequence, int cycle) {
//	cout << cycle << " ";
//	long long output = 0, current, currentMin;
//	int x = 2, y = 0;
//	pair<int, int> destination;
//	for (char c : sequence) {
//		currentMin = 0;
//		destination = directionalKeypad[c];
//		if (storage[x][y][destination.first][destination.second][cycle] != 0) {
//			output += storage[x][y][destination.first][destination.second][cycle];
//			x = destination.first;
//			y = destination.second;
//			continue;
//		}
//		vector<string> paths = findPossibleDirectionalSequences({ x, y }, destination);
//		if (cycle > 0) {
//			for (string path : paths) {
//				current = getDirectionalSequence(path, cycle - 1);
//				if (current < currentMin || currentMin == 0) currentMin = current;
//			}
//		}
//		else {
//			currentMin = paths[0].size();
//		}
//		output += currentMin;
//		storage[x][y][destination.first][destination.second][cycle] = currentMin;
//		x = destination.first;
//		y = destination.second;
//	}
//	return output;
//}
//
//long long getNumericSequence(string code) {
//	long long output = 0, current, currentMin;
//	int x = 2, y = 3;
//	pair<int, int> destination;
//	for (char c : code) {
//		currentMin = 0;
//		destination = c == 'A' ? numericKeypad[10] : numericKeypad[c - '0'];
//		vector<string> paths = findPossibleNumericSequences({ x, y }, destination);
//		for (string path : paths) {
//			current = getDirectionalSequence(path, 24);
//			if (current < currentMin || currentMin == 0) currentMin = current;
//		}
//		output += currentMin;
//		x = destination.first;
//		y = destination.second;
//	}
//	return output;
//}
//
//int main() {
//	fstream input("input21.txt");
//	string inputLine;
//	long long parsedInput, output = 0;
//	if (input.is_open()) {
//		while (input >> inputLine) {
//			parsedInput = getNumericSequence(inputLine);
//			output += parsedInput * stoll(inputLine.substr(0, inputLine.size() - 1));
//		}
//	}
//	cout << output;
//}