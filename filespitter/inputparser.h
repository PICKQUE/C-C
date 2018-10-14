#pragma once
#include<string>
#include<vector>
#include<exception>

using namespace std;

class InputParser {
public:
	InputParser(int argc, const char **argv);
	vector<string> get_token();
private:
	vector<string> tokens;
};