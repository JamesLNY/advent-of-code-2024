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
//vector<int> m[100] = { {} };
//
//bool isValid(vector<int> ordering) {
//    set<int> invalidInts;
//    for (int i = 0; i < ordering.size(); i++) {
//        if (invalidInts.count(ordering[i])) return false;
//        for (int n : m[ordering[i]]) invalidInts.insert(n);
//        if (i == ordering.size() - 1) return true;
//    }
//    return true;
//}
//
//vector<int> findCorrectOrdering(vector<int> original) {
//    while (!isValid(original)) {
//        for (int i = 0; i < original.size(); i++) {
//            for (int n = i + 1; n < original.size(); n++) {
//                if (find(m[original[i]].begin(), m[original[i]].end(), original[n]) != m[original[i]].end()) {
//                    original.insert(original.begin() + i, original[n]);
//                    original.erase(original.begin() + n + 1);
//                    i++;
//                }
//            }
//        }
//    }
//    return original;
//}
//
//int main() {
//    ifstream input("input5.txt");
//    string inputLine, temp;
//    stringstream inputLineStream;
//    vector<int> parsedInput;
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
//            inputLineStream.str(inputLine);
//            while (getline(inputLineStream, temp, ',')) parsedInput.push_back(stoi(temp));
//            if (isValid(parsedInput)) continue;
//            parsedInput = findCorrectOrdering(parsedInput);
//            output += parsedInput[parsedInput.size() / 2];
//        }
//    }
//    input.close();
//    cout << output;
//}