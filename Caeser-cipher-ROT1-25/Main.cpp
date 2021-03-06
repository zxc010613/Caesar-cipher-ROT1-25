#include <iostream>
#include "Saeser.h"
int main(void) {
	char arr[100] = "Hello WorlD!";
	std::cout << "Plain text:";
	std::cout << arr << std::endl;
	for (int i = 1; i <= 25; i++) {
		Caeser Cae = Caeser(i);
		std::cout << "Encryption:";
		std::string * En = Cae.Encrypt(arr);
		std::cout << En->c_str() << std::endl;
		std::cout << "Decryption:";
		std::string * De = Cae.Decrypt(En->c_str());
		std::cout << De->c_str() << std::endl;
		delete En;
		delete De;
	}
	Caeser Cae = Caeser(100);
	std::string * En = Cae.Encrypt(arr);
	if (En != nullptr) {
		std::cout << En->c_str() << std::endl;
	}
}