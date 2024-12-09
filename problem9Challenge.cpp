//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    ifstream input("input9.txt");
//    string inputLine, temp;
//    long long output = 0, currID = 0, index = 0;
//    vector<pair<int, int>> data;
//    if (input.is_open()) {
//        input >> inputLine;
//    }
//    input.close();
//    for (long long i = 0; i < inputLine.size(); i++) {
//        if (i % 2 == 0) {
//            data.push_back({ currID, inputLine[i] - '0' });
//            currID++;
//        }
//        else {
//            data.push_back({ -1, inputLine[i] - '0' });
//        }
//    }
//    for (long long i = data.size() - 1; i >= 0; i--) {
//        if (data[i].first != -1) {
//            for (long long n = 0; n < i; n++) {
//                if (data[n].first == -1 && data[n].second >= data[i].second) {
//                    data[n].second -= data[i].second;
//                    data.insert(data.begin() + n, data[i]);
//                    i++;
//                    data[i].first = -1;
//                    break;
//                }
//            }
//        }
//    }
//    for (int w = 0; w < data.size(); w++) {
//        for (int n = 0; n < data[w].second; n++) {
//            if (data[w].first != -1) {
//                output += index * data[w].first;
//            }
//            index++;
//        }
//    }
//    cout << output;
//}