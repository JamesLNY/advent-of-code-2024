//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//int main() {
//    ifstream input("input1.txt");
//    int a, b, output = 0;
//    vector<int> column2;
//    map<int, pair<int, int>> m;
//    if (input.is_open()) {
//        while (input.good()) {
//            input >> a >> b;
//            if (m.count(a)) {
//                m[a].first++;
//            }
//            else {
//                m[a] = { 1, 0 };
//            }
//            column2.push_back(b);
//        }
//    }
//    input.close();
//    while (!column2.empty()) {
//        if (m.count(column2.front())) {
//            m[column2.front()].second++;
//        }
//        column2.erase(column2.begin());
//    }
//    for (pair<int, pair<int, int>> p : m) {
//        output += p.first * p.second.first * p.second.second;
//    }
//    cout << output;
//}