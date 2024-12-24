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
//map<string, bool> values;
//map<string, vector<string>> instructions;
//vector<string> problems;
//
///*
//The value of each digit is computed in the following manner
//z_1 = a_1 XOR r_1 (Accounting for Carry Over)
//a_1 = x_1 XOR y_1 (Summing)
//r_1 = b_1  OR c_1 (Finding Carry Over - Two Possible Reasons)
//b_1 = x_0 AND y_0 (Summing Overflowed)
//c_1 = r_0 AND a_0 (Overflow When Accounting for Carry Over)
//NOTE: THIS CODE DOES NOT ACTUALLY RETURN THE PLACES THAT NEED TO BE SWAPPED
//IT RETURNS ONLY MORE OR LESS WHERE THOSE LETTERS OCCUR
//I DID THE REST OF THE WORK WITH PEN AND PAPER
//*/
//
//bool checkCarryOver(string value, string digit) {
//	string b_1 = "";
//	string newDigit = to_string(stoi(digit) - 1);
//	if (newDigit.size() < 2) newDigit = "0" + newDigit;
//	vector<string> instruction = instructions[value];
//	if (instructions[instruction[0]][0] == "x" + newDigit || instructions[instruction[0]][0] == "y" + newDigit) b_1 = instruction[0];
//	if (instructions[instruction[2]][0] == "x" + newDigit || instructions[instruction[2]][0] == "y" + newDigit) b_1 = instruction[2];
//	if (b_1 == "") {
//		problems.push_back(value);
//		return false;
//	}
//	return true;
//}
//
//bool checkSumming(string value, string digit) {
//	string x_1 = "", y_1 = "";
//	vector<string> instruction = instructions[value];
//	if (instruction[0] == "x" + digit) x_1 = instruction[0];
//	if (instruction[0] == "y" + digit) y_1 = instruction[0];
//	if (instruction[2] == "x" + digit) x_1 = instruction[2];
//	if (instruction[2] == "y" + digit) y_1 = instruction[2];
//	if (x_1 == "" || y_1 == "") {
//		problems.push_back(value);
//		return false;
//	}
//	return true;
//}
//
//bool checkDigit(string value, string digit) {
//	string a_1 = "", r_1 = "", b_1 = "";
//	vector<string> instruction = instructions[value];
//	if (instruction[1] != "XOR") {
//		problems.push_back(value);
//		return false;
//	}
//	if (instructions[instruction[0]][1] == "OR") r_1 = instruction[0];
//	if (instructions[instruction[0]][1] == "XOR") a_1 = instruction[0];
//	if (instructions[instruction[2]][1] == "OR") r_1 = instruction[2];
//	if (instructions[instruction[2]][1] == "XOR") a_1 = instruction[2];
//	if (r_1 == "" || a_1 == "") {
//		if (r_1 == instruction[2] || a_1 == instruction[2]) {
//			problems.push_back(instruction[0]);
//		}
//		else {
//			problems.push_back(instruction[2]);
//		}
//		return false;
//	}
//	if (!checkSumming(a_1, digit)) return false;
//	if (!checkCarryOver(r_1, digit)) return false;
//	return true;
//}
//
//int main() {
//	ifstream input("input24.txt");
//	string inputLine;
//	stringstream inputLineStream;
//	vector<string> parsedInput;
//	long long numZs = 0;
//	string digit;
//	if (input.is_open()) {
//		while (getline(input, inputLine) && inputLine.size() != 0) {
//			values[inputLine.substr(0, 3)] = inputLine[5] == '1';
//		}
//		while (getline(input, inputLine)) {
//			parsedInput.clear();
//			inputLineStream.clear();
//			inputLineStream.str(inputLine);
//			while (inputLineStream >> inputLine) parsedInput.push_back(inputLine);
//			inputLine = parsedInput.back();
//			parsedInput.pop_back();
//			instructions[inputLine] = parsedInput;
//			if (inputLine[0] == 'z') numZs++;
//		}
//	}
//	input.close();
//	for (int i = numZs - 1; i > 0; i--) {
//		digit = i < 10 ? "z0" + to_string(i) : "z" + to_string(i);
//		checkDigit(digit, digit.substr(1, 2));
//	}
//	sort(problems.begin(), problems.end());
//	for (int i = 0; i < problems.size(); i++) {
//		if (i != 0) cout << ",";
//		cout << problems[i];
//	}
//}