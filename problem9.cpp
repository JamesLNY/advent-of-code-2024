//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    ifstream input("input9.txt");
//    string inputLine;
//    long long output = 0, currID = 0;
//    vector<int> data;
//    if (input.is_open()) {
//        input >> inputLine;
//    }
//    input.close();
//    for (long long i = 0; i < inputLine.size(); i++) {
//        if (i % 2 == 0) {
//            for (long long n = 0; n < inputLine[i] - '0'; n++) data.push_back(currID);
//            currID++;
//        }
//        else {
//            for (long long n = 0; n < inputLine[i] - '0'; n++) data.push_back(-1);
//        }
//    }
//    for (long long i = 0; i < data.size(); i++) {
//        if (data[i] == -1) {
//            while (data.back() == -1) data.pop_back();
//            data[i] = data.back();
//            data.pop_back();
//        }
//        output += i * data[i];
//    }
//    cout << output;
//}