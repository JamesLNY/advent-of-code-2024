//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	ifstream input("input25.txt");
//	string inputLine;
//	vector<string> parsedInput;
//	vector<int> heights;
//	vector<vector<int>> keys = {}, locks = {};
//	if (input.is_open()) {
//		while (input.good()) {
//			heights = vector<int>(5, 0);
//			parsedInput.clear();
//			for (int i = 0; i < 7; i++) {
//				input >> inputLine;
//				parsedInput.push_back(inputLine);
//			}
//			for (int i = 0; i < 5; i++) {
//				for (int n = 1; n < 6; n++) {
//					if (parsedInput[n][i] == '#') heights[i]++;
//				}
//			}
//			parsedInput[0][0] == '#' ? locks.push_back(heights) : keys.push_back(heights);
//		}
//	}
//	input.close();
//	bool foundKey;
//	int output = 0;
//	for (vector<int> lock : locks) {
//		foundKey = false;
//		for (vector<int> key : keys) {
//			for (int i = 0; i < 5; i++) {
//				if (key[i] + lock[i] > 5) break;
//				if (i == 4) output++;
//			}
//		}
//	}
//	cout << output;
//}