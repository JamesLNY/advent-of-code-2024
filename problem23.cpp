//#include <map>
//#include <iostream>
//#include <string>
//#include <fstream>
//#include <vector>
//#include <set>
//#include <queue>
//
//using namespace std;
//
//int main() {
//	fstream input("input23.txt");
//	string inputLine, start, end;
//	map<string, set<string>> adjacencies;
//	set<string> nodes;
//	if (input.is_open()) {
//		while (input >> inputLine) {
//			start = inputLine.substr(0, 2);
//			end = inputLine.substr(3, 2);
//			if (nodes.count(start) == 0) {
//				adjacencies[start] = { end };
//				nodes.insert(start);
//			}
//			else {
//				adjacencies[start].insert(end);
//			}
//			if (nodes.count(end) == 0) {
//				nodes.insert(end);
//				adjacencies[end] = { start };
//			}
//			else {
//				adjacencies[end].insert(start);
//			}
//		}
//	}
//	input.close();
//	set<string> primaryConnections, secondaryConnections;
//	vector<string> current;
//	set<vector<string>> possible;
//	for (string node : nodes) {
//		primaryConnections = adjacencies[node];
//		for (string nodeTwo : primaryConnections) {
//			secondaryConnections = adjacencies[nodeTwo];
//			for (string nodeThree : secondaryConnections) {
//				if (adjacencies[nodeThree].count(node) != 0) {
//					current = { node, nodeTwo, nodeThree };
//					sort(current.begin(), current.end());
//					possible.insert(current);
//				}
//			}
//		}
//	}
//	int output = 0;
//	for (vector<string> nodes : possible) {
//		for (int i = 0; i < 3; i++) {
//			if (nodes[i][0] == 't') {
//				output++;
//				i = 3;
//			}
//		}
//	}
//	cout << output;
//}