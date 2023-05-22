#include <iostream>
#include <string>
using namespace std;

#include "Jantung.h"
#include "Manusia.h"

int main() {
	manusia* varManusia = new manusia("Jono");
	delete varManusia;
	return 0;
}
