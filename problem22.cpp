//#include <string>
//#include <iostream>
//#include <fstream>
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
//int main() {
//	fstream input("input22.txt");
//	string inputLine;
//	long long seed, output = 0;;
//	if (input.is_open()) {
//		while (input >> inputLine) {
//			seed = stoll(inputLine);
//			for (int i = 0; i < 2000; i++) {
//				seed = nextRandom(seed);
//			}
//			output += seed;
//		}
//	}
//	input.close();
//	cout << output;
//}