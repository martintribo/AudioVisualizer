#include <iostream>
#include "audioloader.h"

using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 1) {
		cout << "Supply one audio file to parse!";
	} else {
		audioloader::load(std::string(argv[0]));
		cout << "Loaded file!";
	}

	return 0;
}