/*
 * StringUtils.cpp
 *
 * Utility functions for string manipulation.
 *
 *  Created on: Dec 3, 2015
 *      Author: Vítor E. Silva Souza (vitorsouza@gmail.com)
 *      *trim code copied from http://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring
 *      stringCompare code adapted from code sent by Eduardo Dalapicola.
 */

#include "StringUtils.h"

using namespace std;

namespace cpp_util {

string& ltrim(string &s) {
	s.erase(s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
	return s;
}

string& rtrim(string &s) {
	s.erase(find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(), s.end());
	return s;
}

string& trim(string& s) {
	return ltrim(rtrim(s));
}

bool stringCompare(string s1, string s2) {
	   const collate<char>& col = use_facet<collate<char> >(locale());
	   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	   const char* pb1 = s1.data();
	   const char* pb2 = s2.data();
	   return (col.compare(pb1, pb1 + s1.size(), pb2, pb2 + s2.size()) < 0);
}

bool isNumber(string& s) {
	if (s.empty()) return false;
	for (unsigned int i = 0; i < s.size(); i++)
		if (! isdigit(s.at(i))) return false;
	return true;
}

}
