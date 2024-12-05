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
//int main() {
//    ifstream input("input5.txt");
//    string inputLine, temp;
//    stringstream inputLineStream;
//    vector<int> m[100] = { {} };
//    vector<int> parsedInput;
//    set<int> invalidInts;
//    int output = 0;
//    if (input.is_open()) {
//        while (getline(input, inputLine) && inputLine.size() != 0) {
//            parsedInput.clear();
//            inputLineStream.clear();
//            inputLineStream.str(inputLine);
//            while (getline(inputLineStream, temp, '|')) parsedInput.push_back(stoi(temp));
//            m[parsedInput[1]].push_back(parsedInput[0]);
//        }
//        while (getline(input, inputLine)) {
//            parsedInput.clear();
//            inputLineStream.clear();
//            invalidInts.clear();
//            inputLineStream.str(inputLine);
//            while (getline(inputLineStream, temp, ',')) parsedInput.push_back(stoi(temp));
//            for (int i = 0; i < parsedInput.size(); i++) {
//                if (invalidInts.count(parsedInput[i])) break;
//                for (int n : m[parsedInput[i]]) {
//                    invalidInts.insert(n);
//                }
//                if (i == parsedInput.size() - 1) output += parsedInput[parsedInput.size() / 2];
//            }
//        }
//    }
//    input.close();
//    cout << output;
//}