#pragma once
#include"GuestUser.h"
class Photographer
{
private:
	char phusername[20];
	char phpassword[20];

public:
	Photographer();
	Photographer(const char pphusername[], const char pphpassword[]);
	void displayPhotographerDetails(const char pphusername[], const char pphpassword[]);
	void uploadContent();
	~Photographer();

};
