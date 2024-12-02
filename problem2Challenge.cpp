#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

bool works(vector<int> row) {
    bool isIncreasing = row[1] > row[0];
    for (int i = 0; i < row.size() - 1; i++) {
        if (isIncreasing != (row[i + 1] > row[i])) return false;
        if (abs(row[i + 1] - row[i]) < 1 || abs(row[i + 1] - row[i]) > 3) return false;
    }
    return true;
}

int main() {
    ifstream input("input2.txt");
    vector<int> row, newRow;
    int output = 0;
    string inputLine, temp;
    stringstream inputLineStream;
    bool isIncreasing;
    if (input.is_open()) {
        while (input.good()) {
            inputLineStream.clear();
            row.clear();
            getline(input, inputLine);
            inputLineStream.str(inputLine);
            while (inputLineStream >> temp) row.push_back(stoi(temp));
            for (int i = 0; i < row.size(); i++) {
                newRow = row;
                newRow.erase(newRow.begin() + i);
                if (works(newRow)) {
                    output++;
                    break;
                }
            }
        }
    }
    input.close();
    cout << output;
}