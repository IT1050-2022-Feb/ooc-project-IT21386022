#include "Album.h"
#include<cstring>

Album::Album()
{
	strcpy(album_Id, "");
}

void Album::displayAlbumDetails(const char palbum_Id[])
{
	strcpy(album_Id, "palbum_Id");
}

Album::~Album()
{
	//Destructor
}
