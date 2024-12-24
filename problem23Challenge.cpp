//#include <map>
//#include <iostream>
//#include <string>
//#include <fstream>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//// Taken from https://www.geeksforgeeks.org/maximal-clique-problem-recursive-solution/
//void bronKerbosch(set<int>&& R, set<int>&& P, set<int>&& X, map<int, set<int>>& graph, vector<set<int>>& cliques) {
//    if (P.empty() && X.empty()) {
//        cliques.push_back(R);
//        return;
//    }
//
//    while (!P.empty()) {
//        int v = *P.begin();
//        set<int> newR = R;
//        newR.insert(v);
//        set<int> newP;
//        for (int p : P) {
//            if (graph[v].find(p) != graph[v].end()) {
//                newP.insert(p);
//            }
//        }
//        set<int> newX;
//        for (int x : X) {
//            if (graph[v].find(x) != graph[v].end()) {
//                newX.insert(x);
//            }
//        }
//        bronKerbosch(move(newR), move(newP), move(newX), graph, cliques);
//        P.erase(v);
//        X.insert(v);
//    }
//}
//
//int main() {
//	fstream input("input23.txt");
//	string inputLine, start, end;
//	map<string, set<string>> adjacencies;
//	map<string, bool> visited;
//	set<string> nodes;
//	if (input.is_open()) {
//		while (input >> inputLine) {
//			start = inputLine.substr(0, 2);
//			end = inputLine.substr(3, 2);
//			if (nodes.count(start) == 0) {
//				adjacencies[start] = { end };
//				nodes.insert(start);
//			}
//			else {
//				adjacencies[start].insert(end);
//			}
//			if (nodes.count(end) == 0) {
//				nodes.insert(end);
//				adjacencies[end] = { start };
//			}
//			else {
//				adjacencies[end].insert(start);
//			}
//		}
//	}
//	input.close();
//
//	map<string, int> ids;
//	map<int, string> reverseIds;
//	int count = 0;
//	for (string node : nodes) {
//		ids[node] = count;
//		reverseIds[count] = node;
//		count++;
//	}
//
//    map<int, set<int>> graph;
//
//	for (string node : nodes) {
//		for (string nodeTwo : adjacencies[node]) {
//            graph[ids[node]].insert(ids[nodeTwo]);
//		}
//	}
//	
//    set<int> vertices;
//    for (const auto& pair : graph) {
//        vertices.insert(pair.first);
//    }
//
//    vector<set<int>> allCliques;
//    bronKerbosch({}, move(vertices), {}, graph, allCliques);
//
//    int maxCliqueSize = 0;
//    set<int> maxClique;
//    for (set<int> clique : allCliques) {
//        if (clique.size() > maxCliqueSize) {
//            maxCliqueSize = clique.size();
//            maxClique = clique;
//        }
//    }
//
//    for (int i : maxClique) {
//        cout << reverseIds[i];
//        if (i != *(maxClique.rbegin()++)) cout << ",";
//    }
//}