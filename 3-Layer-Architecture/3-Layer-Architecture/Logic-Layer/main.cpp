#include "precompiler.h"

int main()
{
	//example username and password: ADMIN, password: ADMIN81011
	std::string* username = new std::string;
	std::string* password = new std::string;
	std::fstream dataAccess;
	std::string endInfo;

	//Accessing the database
	dataAccess.open("./Data-Layer/database.txt", std::fstream::in | std::fstream::out | std::fstream::app);
	displayInfo(username, password);

	if (dataAccess.is_open())
	{
		//Checking the login credentials
		if (checkLoginCredentials(dataAccess, username, password))
		{
			endInfo = "Login successful!";
		}
		
		else
		{
			endInfo = "Username or Password is invalid. Try again!";
		}
	}
	else
	{
		endInfo = "Login registry can't open. Try again later...";
	}

	displayEndInfo(endInfo);
	dataAccess.close();
	delete username;
	delete password;
}