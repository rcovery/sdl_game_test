#include <SDL2/SDL.h>
#include <stdio.h>

#include "./constants.h"

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;

int init_window(void) {
  if (!SDL_Init(SDL_INIT_VIDEO)) {
    return EXIT_FAILURE;
  }

  window = SDL_CreateWindow(
    "Gayme",
    SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED,
    GAYME_WIDTH,
    GAYME_HEIGHT,
    0
  );

  if (!window) {
    return EXIT_FAILURE;
  }

  renderer = SDL_CreateRenderer(window, -1, 0);

  if (!renderer) {
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}

int main(int args, char *argc[]) {
  init_window();
  return 0;
}
