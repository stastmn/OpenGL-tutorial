//
// Created by stas on 11.08.2019.
//

#ifndef OPENGLPROGRAMINGTUTORIAL_MESH_H
#define OPENGLPROGRAMINGTUTORIAL_MESH_H

#include <glm/glm.hpp>
#include <GL/glew.h>

class Vertex{
public:
    Vertex(const glm::vec3& pos){
        this->pos = pos;
    }
protected:
private:
    glm::vec3 pos;



};

class Mesh {

public: Mesh(Vertex* vertices, unsigned int numVertices);
    ~Mesh();
    void Draw();

private:
    Mesh(const Mesh & other);
    void operator =(const Mesh& rhs);



    enum{
        POSITION_VB,

        NUM_BUFFERS
    };
    GLuint m_vertexArrayObject;
    GLuint m_veretxArrayBuffers[NUM_BUFFERS];

    unsigned int m_drawCount;

};


#endif //OPENGLPROGRAMINGTUTORIAL_MESH_H
