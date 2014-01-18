#if !defined(mappable_h)
#define mappable_h

#include <iostream>

#define ALPHABET_SIZE 26

using namespace std;

//The mappable class
class mappable {
	public:
	virtual char mapChar(char plainChar, int roundsApplied) = 0;
};

#endif
