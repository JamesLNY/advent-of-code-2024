//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//
//using namespace std;
//
//int main() {
//    ifstream input("input7.txt");
//    string inputLine, temp;
//    stringstream inputLineStream;
//    vector<int> parsedInput;
//    long long output = 0, tempInt, desiredValue;
//    if (input.is_open()) {
//        while (getline(input, inputLine)) {
//            parsedInput.clear();
//            inputLineStream.clear();
//            inputLineStream.str(inputLine);
//            inputLineStream >> temp;
//            desiredValue = stoull(temp.substr(0, temp.size() - 1));
//            while (inputLineStream >> tempInt) parsedInput.push_back(tempInt);
//            for (int i = 0; i < 1 << (parsedInput.size() - 1); i++) {
//                tempInt = parsedInput[0];
//                for (int n = 0; n < (parsedInput.size() - 1); n++) {
//                    i & 1 << n ? tempInt += parsedInput[n + 1] : tempInt *= parsedInput[n + 1];
//                }
//                if (tempInt == desiredValue) {
//                    output += desiredValue;
//                    break;
//                }
//            }
//        }
//    }
//    input.close();
//    cout << output;
//}