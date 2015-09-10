#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <stdio.h>      
#include <stdlib.h>
#include <map>
#include <ctime>
#include <unordered_set>

using namespace std;

map<string, string> edges;

vector<string> split(string st)
{
	string buf;
	stringstream ss(st);

	vector<string> tokens;

	while (ss >> buf){ tokens.push_back(buf); }

	return tokens;
}

void MapGraph(string file)
{
	string line;
	int l, r;
	vector<string> splitter;

	ifstream ifs(file, ifstream::in);

	while (getline(ifs, line))
	{
		splitter = split(line);

		istringstream(splitter[1]) >> l;
		istringstream(splitter[2]) >> r;

		string forward = to_string(l) + " " + to_string(r);
		string inverse = to_string(r) + " " + to_string(l);

		pair<string, string> prs = pair<string, string>(forward, "");

		if (edges.find(forward) == edges.end() && edges.find(inverse) == edges.end())
		{
			edges.insert(prs);
		}
	}

	ifs.close();
}

int main(int argc, char *argv[])
{
	string core = "C:\\Users\\mschuee\\Desktop\\Data\\";
	string graph1 = core + "graph1.txt";
	string graph2 = core + "graph2.txt";
	string graph3 = core + "graph3.txt";

	MapGraph(graph1);
	cout << "Graph 1 Complete\n\n\n";
	MapGraph(graph2); 
	cout << "Graph 2 Complete\n\n\n";
	MapGraph(graph3);
	cout << "Graph 3 Complete";

	int stop = 0;
}