#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class App {
    public:
        const char *vertexShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";
        const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
    "}\n\0";
        App();
        ~App();
        int run();
        static void FramebufferSizeCallback(GLFWwindow* window, int width, int height) {
            glViewport(0, 0, width, height);
        }
    protected:
        unsigned int VBO, VAO, EBO;
        int shaderProgram;
        GLFWwindow* window;
        void processInput();
};

