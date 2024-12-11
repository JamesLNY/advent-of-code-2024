//#include <iostream>
//#include <fstream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//map<pair<long long, long long>, long long> storage;
//
//long long evaluate(string number, long long location) {
//    long long returnValue;
//    number = to_string(stoll(number));
//    if (location == 75) {
//        return 1;
//    }
//    if (storage.count({ stoll(number), location }) != 0) {
//        return storage[{ stoll(number), location }];
//    }
//    else {
//        if (number == "0") {
//            returnValue = evaluate("1", location + 1);
//        }
//        else if (number.size() % 2 == 0) {
//            returnValue = evaluate(number.substr(0, number.size() / 2), location + 1) + evaluate(number.substr(number.size() / 2, number.size() / 2), location + 1);
//        }
//        else {
//            returnValue = evaluate(to_string(stoll(number) * 2024ll), location + 1);
//        }
//        storage[{ stoll(number), location }] = returnValue;
//        return returnValue;
//    }
//}
//
//int main() {
//    ifstream input("input11.txt");
//    int inputLine;
//    long long output = 0;
//    if (input.is_open()) {
//        while (input >> inputLine) {
//            output += evaluate(to_string(inputLine), 0);
//        }
//    }
//    cout << output;
//}