//
// Created by stas on 27.07.2019.
//
#include <string>
#include <SDL2/SDL.h>
#ifndef OPENGLPROGRAMINGTUTORIAL_DISPLAY_H
#define OPENGLPROGRAMINGTUTORIAL_DISPLAY_H


class Display {
public:
    Display(int width, int height, const std::string& title);
    ~Display();
    void Update();
    bool IsClosed();
    void Clear(float r, float g, float b, float a);

private:
    SDL_Window* m_window;
    SDL_GLContext  m_glContext;
    bool m_isClosed;
};


#endif //OPENGLPROGRAMINGTUTORIAL_DISPLAY_H
