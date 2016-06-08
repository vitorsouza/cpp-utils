/*
 * StringUtils.h
 *
 * Utility functions for string manipulation.
 *
 *  Created on: Dec 3, 2015
 *      Author: Vítor E. Silva Souza (vitorsouza@gmail.com)
 */

#ifndef STRINGUTILS_H_
#define STRINGUTILS_H_

#include <algorithm>
#include <cctype>
#include <functional>
#include <locale>
#include <string>

namespace cpp_util {

using namespace std;

string& ltrim(string &s);

string& rtrim(string &s);

string& trim(string& s);

bool stringCompare(string s1, string s2);

bool isNumber(string& s);

}
#endif
