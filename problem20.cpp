//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//int main() {
//	ifstream input("input20.txt");
//	string inputLine;
//	vector<string> grid = {};
//	vector<int> current;
//	int output = 0, distanceOne, distanceTwo;
//	if (input.is_open()) {
//		while (input >> inputLine) grid.push_back(inputLine);
//	}
//	input.close();
//	for (int y = 0; y < grid.size(); y++) {
//		for (int x = 0; x < grid[0].size(); x++) {
//			if (grid[y][x] == 'S') {
//				current = { x, y, 1 };
//			}
//		}
//	}
//	queue<vector<int>> floodfill;
//	pair<int, int> directions[] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} };
//	vector<vector<int>> distance(grid.size(), vector<int>(grid[0].size(), 0));
//	floodfill.push(current);
//	while (!floodfill.empty()) {
//		current = floodfill.front();
//		floodfill.pop();
//		if (grid[current[1]][current[0]] == '#') continue;
//		if (distance[current[1]][current[0]] != 0) continue;
//		distance[current[1]][current[0]] = current[2];
//		for (pair<int, int> direction : directions) {
//			floodfill.push({ current[0] + direction.first, current[1] + direction.second, current[2] + 1 });
//		}
//	}
//	for (int y = 1; y < distance.size() - 1; y++) {
//		for (int x = 1; x < distance[0].size() - 1; x++) {
//			if (distance[y][x] == 0) {
//				for (int i = 0; i < 2; i++) {
//					distanceOne = distance[y + directions[i].second][x + directions[i].first];
//					distanceTwo = distance[y + directions[i + 2].second][x + directions[i + 2].first];
//					if (distanceOne == 0 || distanceTwo == 0) continue;
//					if (abs(distanceOne - distanceTwo) - 2 >= 100) output++;
//				}
//			}
//		}
//	}
//	cout << output;
//}