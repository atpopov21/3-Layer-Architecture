#include "../Logic-Layer/precompiler.h"

void displayInfo(std::string* username, std::string* password)
{
	std::cout << "Enter Username: ";
	std::cin >> *username;
	std::cout << std::endl;
	std::cout << "Enter Password: ";
	std::cin >> *password;
}

void displayEndInfo(std::string& outString)
{
	std::cout << std::endl;
	std::cout << outString;
}