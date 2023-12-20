#include "precompiler.h"

bool checkLoginCredentials(std::fstream& dataAccess, std::string* usernname, std::string* password)
{
	std::string checkString;

	while (dataAccess)
	{
		std::getline(dataAccess, checkString);
		if (checkString == *usernname + " " + *password)
		{
			return true;
		}
	}

	return false;
}