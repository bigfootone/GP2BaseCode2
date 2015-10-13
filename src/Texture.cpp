#include "Texture.h"

GLuint loadTextureFromFile(const string& filename)
{
	SDL_Surface *imageSurface = IMG_Load(filename.c_str());
	if (!imageSurface)
	{
		cout << "Can't load image" << filename << " " << IMG_GetError();
		return 0;
	}

	GLuint textureID = convertSDLSurfaceToTexture(imageSurface);
	SDL_FreeSurface(imageSurface);

	return textureID;
}
