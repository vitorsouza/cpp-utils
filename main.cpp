/*
 * main.cpp
 *
 *  Created on: Jul 9, 2014
 *      Author: Vítor E. Silva Souza (vitorsouza@gmail.com)
 */

#include <ctime>
#include <iostream>
#include "util/DateUtils.h"
#include "util/NumberUtils.h"
#include "util/Tokenizer.h"

using namespace std;
using namespace cpp_util;

int main() {
	// Parses a date (string -> time_t) using the pt-BR locale.
	string data = "15/07/2014";
	cout << validDate(data, DATE_FORMAT_PT_BR_SHORT) << endl;
	time_t hoje = parseDate(data, DATE_FORMAT_PT_BR_SHORT);
	cout << hoje << endl << endl;

	// Adds 30 hours to the date and formatting it back to string.
	hoje += 30 * 60 * 60;
	cout << formatDate(hoje, DATE_FORMAT_PT_BR_SHORT) << endl << endl;

	// Parses a decimal number using the pt-BR locale.
	string numero = "935,79";
	double d = parseDouble(numero, LOCALE_PT_BR);
	cout << d << endl << endl;

	// Multiplies the number by 2 and formats it back to string, normal and currency styles.
	d *= 2;
	cout << formatDouble(d, LOCALE_PT_BR) << endl;
	cout << formatDoubleCurrency(d, LOCALE_PT_BR) << endl << endl;

	// Using the Tokenizer to read tokens from a string separated by ';'.
	string linha = "Um;Dois;Três;Quatro;Cinco";
	Tokenizer tok(linha, ';');
	while (tok.hasNext()) cout << tok.next() << endl;
	cout << endl;

	// Again the Tokenizer, but this time obtaining a vector of strings.
	Tokenizer tok2(linha, ';');
	vector<string> vec = tok2.remaining();
	for (string s : vec) cout << s << endl;
}
