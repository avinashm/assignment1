/*
 * Utils.h
 *
 *  Created on: 08-Feb-2012
 *      Author: sandeep
 */

#ifndef UTILS_H_
#define UTILS_H_

#include "commons.h"

class Utils {
public:
	Utils();
	virtual ~Utils();
	static int getIntForBytes(char* bytes);
	static KeyType getKeyTypeForBytes(char* );
	static char * getBytesForKeyType(KeyType k);
	static char * getBytesForInt(long long int input);
	static char * getBytesForInt(int input);
	static int copyBytes(char *, char *,int);
};

#endif /* UTILS_H_ */
