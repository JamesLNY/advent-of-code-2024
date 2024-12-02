//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//    ifstream input("input2.txt");
//    vector<int> row;
//    int output = 0;
//    string inputLine;
//    string temp;
//    stringstream inputLineStream;
//    bool isIncreasing;
//    if (input.is_open()) {
//        while (input.good()) {
//            getline(input, inputLine);
//            inputLineStream.str(inputLine);
//            while (inputLineStream >> temp) row.push_back(stoi(temp));
//            isIncreasing = row[1] > row[0];
//            for (int i = 0; i < row.size() - 1; i++) {
//                if (isIncreasing != (row[i + 1] > row[i])) break;
//                if (abs(row[i + 1] - row[i]) < 1 || abs(row[i + 1] - row[i]) > 3) break;
//                if (i == row.size() - 2) output++;
//            }
//            inputLineStream.clear();
//            row.clear();
//        }
//    }
//    input.close();
//    cout << output;
//}