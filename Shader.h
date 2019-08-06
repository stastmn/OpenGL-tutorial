//
// Created by stas on 03.08.2019.
//

#ifndef OPENGLPROGRAMINGTUTORIAL_SHADER_H
#define OPENGLPROGRAMINGTUTORIAL_SHADER_H
#include<string>
#include <iostream>
#include <fstream>
#include <GL/glew.h>

class Shader {
public:
    Shader(const std::string& fileName);

    void Bind();

    virtual ~Shader();

private:
    static const unsigned int NUM_SHADERS = 2;
    void operator = (const Shader& other){}
    Shader(const Shader& other){}
    GLuint  m_program;
    GLuint  m_shaders[NUM_SHADERS];

};


#endif //OPENGLPROGRAMINGTUTORIAL_SHADER_H
