//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    ifstream input("input3.txt");
//    string inputLine, temp;
//    int output = 0, a, b;
//    bool enabled = true;
//    if (input.is_open()) {
//        while (input.good()) {
//            input >> temp;
//            inputLine += temp;
//        }
//    }
//    input.close();
//    for (int i = 0; i < inputLine.size(); i++) {
//        if (inputLine.substr(i, 4) == "do()") {
//            enabled = true;
//            i += 3;
//        }
//        else if (inputLine.substr(i, 7) == "don't()") {
//            enabled = false;
//            i += 6;
//        }
//        else if (inputLine.substr(i, 4) == "mul(") {
//            a = 0;
//            b = 0;
//            i += 4;
//            if (!isdigit(inputLine[i])) break;
//            while (isdigit(inputLine[i])) {
//                a *= 10;
//                a += inputLine[i] - '0';
//                i++;
//            }
//            if (inputLine[i] != ',') continue;
//            i++;
//            if (!isdigit(inputLine[i])) break;
//            while (isdigit(inputLine[i])) {
//                b *= 10;
//                b += inputLine[i] - '0';
//                i++;
//            }
//            if (inputLine[i] != ')') continue;
//            if (enabled) output += a * b;
//        }
//    }
//    cout << output;
//}