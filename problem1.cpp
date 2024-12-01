//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    ifstream input("input1.txt");
//    int a, b, output = 0;
//    vector<int> column1, column2;
//    if (input.is_open()) {
//        while (input.good()) {
//            input >> a >> b;
//            column1.push_back(a);
//            column2.push_back(b);
//        }
//    }
//    sort(column1.begin(), column1.end());
//    sort(column2.begin(), column2.end());
//    while (!column1.empty()) {
//        output += abs(column2.front() - column1.front());
//        column1.erase(column1.begin());
//        column2.erase(column2.begin());
//    }
//    cout << output;
//}