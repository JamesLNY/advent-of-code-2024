//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include <numeric>
//
//using namespace std;
//
//int main() {
//    ifstream input("input14.txt");
//    string inputLine, temp;
//    stringstream inputLineStream;
//    int width = 101, height = 103, seconds = 100, x, y, results[4] = {0};
//    vector<int> parsedInput;
//    int output = 0;
//    if (input.is_open()) {
//        while (input.good()) {
//            parsedInput.clear();
//            for (int n = 0; n < 2; n++) {
//                input >> inputLine;
//                inputLineStream.clear();
//                inputLineStream.str(inputLine.substr(2));
//                for (int i = 0; i < 2; i++) {
//                    getline(inputLineStream, temp, ',');
//                    parsedInput.push_back(stoi(temp));
//                }
//            }
//            x = (((parsedInput[0] + parsedInput[2] * seconds) % width) + width) % width;
//            y = (((parsedInput[1] + parsedInput[3] * seconds) % height) + height) % height;
//            if (x == width / 2 || y == height / 2) continue;
//            x < width / 2 ? y < height / 2 ? results[0]++ : results[1]++ : y < height / 2 ? results[2]++ : results[3]++;
//        }
//    }
//    input.close();
//    cout << accumulate(begin(results), end(results), 1, multiplies<int>());
//}