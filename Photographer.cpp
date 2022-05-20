#include "Photographer.h"
#include <cstring>

Photographer::Photographer()
{
	strcpy(phusername, "");
	strcpy(phpassword, "");
}

Photographer::Photographer(const char pphusername[], const char pphpassword[])
{
	strcpy(phusername, pphusername);
	strcpy(phpassword, pphpassword);
}

void Photographer::displayPhotographerDetails(const char pphusername[], const char pphpassword[])
{
	strcpy(phusername, pphusername);
	strcpy(phpassword, pphpassword);
}

void Photographer::uploadContent()
{

}

Photographer::~Photographer()
{
	//Destructor
}
