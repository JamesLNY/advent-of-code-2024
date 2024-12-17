//#include <vector>
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <sstream>
//#include <cmath>
//
//using namespace std;
//
//long long registers[3];
//
//long long getCombo(long long value) {
//	if (value <= 3) return value;
//	return registers[value - 4];
//}
//
//int main() {
//	ifstream input("input17.txt");
//	string inputLine;
//	stringstream inputLineStream;
//	vector<long long> instructions, output;
//	if (input.is_open()) {
//		for (long long i = 0; i < 3; i++) input >> inputLine >> inputLine >> registers[i];
//		input >> inputLine >> inputLine;
//		inputLineStream.str(inputLine);
//		while (getline(inputLineStream, inputLine, ',')) instructions.push_back(stoi(inputLine));
//	}
//	long long index = 0, operand;
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
//	for (long long i = 0; i < output.size(); i++) {
//		cout << output[i];
//		if (i != output.size() - 1) cout << ",";
//	}
//}