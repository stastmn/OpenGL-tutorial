//
// Created by stas on 03.08.2019.
//

#include "Shader.h"
#include <stdio.h>

static void CheckShaderError(GLuint shader,GLuint flag,bool isProgram, const std::string& errorMessage);
static std::string LoadShader(const std:: string& fileName);


Shader::Shader(const std::string &fileName) {
    m_program = glCreateProgram();
    //m_shaders[0] =
}

Shader::~Shader() {
glDeleteProgram(m_program);

}

static std::string LoadShader(const std:: string& fileName){
    std::ifstream file;
    file.open(fileName.c_str());

    std::string output;
    std::string line;

    if(file.is_open()){
        while(file.good()){
            getline(file,line);
            output.append(line+"\n");
        }
    }
    else{
        std::cerr<<"Unable to load shader: "<< fileName<< std::endl;

    }
    return output;
}

static void CheckShaderError(GLuint shader,GLuint flag,bool isProgram, const std::string& errorMessage){
    GLint  success = 0;
    GLchar  error[1024 ] = {"0"};

    if(isProgram)
        glGetProgramInfoLog(shader, sizeof(error),NULL,error);
    else
        glGetProgramInfoLog(shader, sizeof(error),NULL,error);
    std::cerr<<errorMessage<<": '"<<error<<"' \n";
}