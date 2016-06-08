/*
 * DateUtils.h
 *
 * Utility functions for date manipulation.
 *
 *  Created on: Jul 9, 2014
 *      Author: Vítor E. Silva Souza (vitorsouza@gmail.com)
 */

#ifndef DATEUTILS_H_
#define DATEUTILS_H_

#include <ctime>
#include <string>

namespace cpp_util {

using namespace std;

const string DATE_FORMAT_PT_BR_SHORT = "%d/%m/%Y";

/* Converts dates in human-readable format to machine-processable format for storing in objects. */
time_t parseDate(const string& str, const string& formato);

/* Converts dates in machine-processable format to human-readable format for printing. */
string formatDate(const time_t& t, const string& format);

/* Verifies if a string contains a valid date according to a format. */
bool validDate(const string& str, const string& format);

}
#endif
