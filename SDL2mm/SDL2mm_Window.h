/**
 *
 */

#ifndef _SDL2MM_WINDOW_H
#define _SDL2MM_WINDOW_H

#include "SDL2mm.h"

namespace SDL2 {

class Window {
  private:
	SDL_Window *sdlWindow;
  public:
	Window(const char* title="", int x=0, int y=0, int w=800, int h=600, Uint32 flags);
	Window(SDL_Window *initWindow);
	~Window();

	Surface getSurface();
};

}

#endif
