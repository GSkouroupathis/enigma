#include "rotor.h"

rotor::rotor(int* rotorConfig, int rotateRate) {
		this->roundsApplied = 0;
		this->rotateRate = rotateRate;
		this->rotorConfig = rotorConfig;
		this->rotorReverseConfig = new int[26];
		for ( int i=0; i<26; i++ ) {
			this->rotorReverseConfig[rotorConfig[i]] = i;
		}
}

//Just a testing function to see what's going on inside your machine
void rotor::printstuff() {
		cout << endl;
		cout << "reverse: ";
		for (int i=0; i<26; i++) {
			cout << rotorReverseConfig[i] << ",";
		}
		cout << endl;
}

//The encryption function when the character passes through the rotor towards the reflector
char rotor::mapChar(char plainChar, int roundsApplied) {
	cout << endl;
	int offset = (roundsApplied/rotateRate)%ALPHABET_SIZE;
	plainChar -= 'A';
	plainChar = (ALPHABET_SIZE + rotorConfig[(offset + plainChar) % ALPHABET_SIZE] - offset)
		% ALPHABET_SIZE;
	plainChar += 'A';
	return plainChar;
}

//The encryption function when the character passes through the rotor towards the plugboard
char rotor::mapBackChar(char plainChar, int roundsApplied) {
	cout << "decoding with ";
	for (int i=0; i<26; i++) {
			cout << rotorReverseConfig[i] << ",";
		}
	cout << endl;
	int offset = (roundsApplied/rotateRate)%ALPHABET_SIZE;
	plainChar -= 'A';
	plainChar = (ALPHABET_SIZE + rotorReverseConfig[(offset + plainChar) % ALPHABET_SIZE] - offset)
		% ALPHABET_SIZE;
	plainChar += 'A';
	return plainChar;
}
