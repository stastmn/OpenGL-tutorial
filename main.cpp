#include <iostream>
#include <GL/glew.h>
#include "Display.h"
#include "Shader.h"
#include "Mesh.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Display display(800,600, "Hello world");

    Shader shader("../res/basicShader");
    Vertex vertices[] = { Vertex(glm::vec3(-0.5,-0.5,0)),
                          Vertex(glm::vec3(0,0.5,0)),
                          Vertex(glm::vec3(0.5,-0.5,0)),};
    Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));
    while(!display.IsClosed()){
        display.Clear(1.0f,0.15f,0.3f,1.0f);
        shader.Bind();
        mesh.Draw();
        display.Update();
    }


    return 0;
}