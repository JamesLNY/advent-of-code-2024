//#include <string>
//#include <iostream>
//#include <fstream>
//#include <vector>;
//
//using namespace std;
//
//long long nextRandom(long long seed) {
//	seed = ((seed * 64) ^ seed) % 16777216;
//	seed = ((seed / 32) ^ seed) % 16777216;
//	seed = ((seed * 2048) ^ seed) % 16777216;
//	return seed;
//}
//
//long long possible[19][19][19][19] = { 0 };
//bool visited[19][19][19][19] = { false };
//
//int main() {
//	fstream input("input22.txt");
//	string inputLine;
//	long long seed, output = 0, previous;
//	vector<int> sequence;
//	if (input.is_open()) {
//		while (input >> inputLine) {
//			sequence.clear();
//			seed = stoll(inputLine);
//			previous = seed;
//			for (int a = 0; a < 19; a++) {
//				for (int b = 0; b < 19; b++) {
//					for (int c = 0; c < 19; c++) {
//						for (int d = 0; d < 19; d++) {
//							visited[a][b][c][d] = false;
//						}
//					}
//				}
//			}
//			for (int i = 0; i < 1999; i++) {
//				if (sequence.size() == 4) sequence.erase(sequence.begin());
//				seed = nextRandom(seed);
//				sequence.push_back(seed % 10 - previous % 10);
//				previous = seed;
//				if (sequence.size() == 4) {
//					if (visited[sequence[0] + 9][sequence[1] + 9][sequence[2] + 9][sequence[3] + 9]) continue;
//					visited[sequence[0] + 9][sequence[1] + 9][sequence[2] + 9][sequence[3] + 9] = true;
//					possible[sequence[0] + 9][sequence[1] + 9][sequence[2] + 9][sequence[3] + 9] += seed % 10;
//				}
//			}
//		}
//	}
//	input.close();
//	for (int a = 0; a < 19; a++) {
//		for (int b = 0; b < 19; b++) {
//			for (int c = 0; c < 19; c++) {
//				for (int d = 0; d < 19; d++) {
//					output = max(output, possible[a][b][c][d]);
//				}
//			}
//		}
//	}
//	cout << output;
//}