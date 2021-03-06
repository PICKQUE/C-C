#include"pch.h"
#include<cassert>
#include<iostream>

#include"inputparser.h"

InputParser::InputParser(int argc, const char **argv) {
	if (argc == 1) {
		throw invalid_argument("no command found");
	}
	for (int i = 1; i < argc; i++) {
		tokens.push_back(string(argv[i]));
		//cout<<tokens[i-1]<<endl;
		//cout<<(token[i-1]=='-s')<<endl;
		if (i == 1 && (tokens[0] != "-s"&&tokens[0] != "-m")) {

			throw invalid_argument("invalid command " + tokens[0] + "!");
		}
	}
}
vector<string> InputParser::get_token() {
	return tokens;
}