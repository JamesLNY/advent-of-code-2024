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
//    vector<long long> start, end;
//    long long output = 0, tempInt, desiredValue;
//    if (input.is_open()) {
//        while (getline(input, inputLine)) {
//            start = {0};
//            inputLineStream.clear();
//            inputLineStream.str(inputLine);
//            inputLineStream >> temp;
//            desiredValue = stoll(temp.substr(0, temp.size() - 1));
//            inputLineStream >> start[0];
//            while (inputLineStream >> tempInt) {
//                end.clear();
//                for (int i = 0; i < start.size(); i++) {
//                    if (start[i] > desiredValue) continue;
//                    end.push_back(start[i] * tempInt);
//                    end.push_back(start[i] + tempInt);
//                    end.push_back(stoll(to_string(start[i]) + to_string(tempInt)));
//                }
//                start = end;
//            }
//            if (count(end.begin(), end.end(), desiredValue) != 0) output += desiredValue;
//        }
//    }
//    input.close();
//    cout << output;
//}