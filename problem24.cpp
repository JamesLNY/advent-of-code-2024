//#include <iostream>
//#include <fstream>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//vector<vector<string>> instructions;
//map<string, bool> values;
//
//bool dfs(string value) {
//	if (values.count(value) != 0) return values[value];
//	bool result = false;
//	for (vector<string> instruction : instructions) {
//		if (instruction.back() == value) {
//			bool paramater1 = dfs(instruction[0]);
//			bool paramater2 = dfs(instruction[2]);
//			if (instruction[1] == "AND") {
//				result = paramater1 && paramater2;
//			}
//			else if (instruction[1] == "OR") {
//				result = paramater1 || paramater2;
//			}
//			else if (instruction[1] == "XOR") {
//				result = paramater1 != paramater2;
//			}
//			break;
//		}
//	}
//	values[value] = result;
//	return result;
//}
//
//int main() {
//	ifstream input("input24.txt");
//	string inputLine;
//	stringstream inputLineStream;
//	vector<string> parsedInput;
//	long long numZs = 0, digit, output = 0;
//	if (input.is_open()) {
//		while (getline(input, inputLine) && inputLine.size() != 0) {
//			values[inputLine.substr(0, 3)] = inputLine[5] == '1';
//		}
//		while (getline(input, inputLine)) {
//			parsedInput.clear();
//			inputLineStream.clear();
//			inputLineStream.str(inputLine);
//			while (inputLineStream >> inputLine) parsedInput.push_back(inputLine);
//			instructions.push_back(parsedInput);
//			if (parsedInput.back()[0] == 'z') numZs++;
//		}
//	}
//	input.close();
//	for (int i = numZs - 1; i >= 0; i--) {
//		digit = i < 10 ? dfs("z0" + to_string(i)) : dfs("z" + to_string(i));
//		output += digit;
//		if (i != 0) output *= 2;
//	}
//	cout << output;
//}