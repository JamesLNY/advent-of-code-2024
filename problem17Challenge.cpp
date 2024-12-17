//#include <vector>
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <sstream>
//#include <cmath>
//#include <queue>
//
//using namespace std;
//
//long long registers[3];
//vector<long long> instructions;
//
//long long getCombo(long long value) {
//	if (value <= 3) return value;
//	return registers[value - 4];
//}
//
//vector<int> solve(long long a) {
//	registers[0] = a;
//	registers[1] = 0;
//	registers[2] = 0;
//	vector<int> output;
//	int index = 0, operand;
//	while (index < instructions.size()) {
//		operand = instructions[index + 1];
//		switch (instructions[index]) {
//		case 0:
//			registers[0] = registers[0] / (long long)(pow(2, getCombo(operand)));
//			break;
//		case 1:
//			registers[1] = registers[1] ^ operand;
//			break;
//		case 2:
//			registers[1] = getCombo(operand) % 8;
//			break;
//		case 3:
//			if (registers[0] != 0) index = operand - 2;
//			break;
//		case 4:
//			registers[1] = registers[1] ^ registers[2];
//			break;
//		case 5:
//			output.push_back(getCombo(operand) % 8);
//			break;
//		case 6:
//			registers[1] = registers[0] / (long long)(pow(2, getCombo(operand)));
//			break;
//		case 7:
//			registers[2] = registers[0] / (long long)(pow(2, getCombo(operand)));
//			break;
//		}
//		index += 2;
//	}
//	return output;
//}
//
//int main() {
//	ifstream input("input17.txt");
//	string inputLine;
//	stringstream inputLineStream;
//	if (input.is_open()) {
//		for (long long i = 0; i < 11; i++) input >> inputLine;
//		inputLineStream.str(inputLine);
//		while (getline(inputLineStream, inputLine, ',')) instructions.push_back(stoi(inputLine));
//	}
//	queue<pair<long long, long long>> testValues;
//	vector<int> solution;
//	for (int i = 0; i < 8; i++) testValues.push({i, 0});
//	while (true) {
//		solution = solve(testValues.front().first);
//		if (solution[0] == instructions[instructions.size() - 1 - testValues.front().second]) {
//			if (testValues.front().second == instructions.size() - 1) {
//				cout << testValues.front().first;
//				break;
//			}
//			for (int i = 0; i < 8; i++) testValues.push({ testValues.front().first * 8 + i, testValues.front().second + 1 });
//		}
//		testValues.pop();
//	}
//}