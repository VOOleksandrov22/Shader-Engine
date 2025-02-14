#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <iostream>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

void initVulkan() {
    // Initialize Vulkan (instance, physical device, logical device, etc.)
    std::cout << "Vulkan Initialized!" << std::endl;
}

void mainLoop(GLFWwindow* window) {
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();  // Process user input
    }
}

void cleanup(GLFWwindow* window) {
    glfwDestroyWindow(window);
    glfwTerminate();
}

int main() {
    glfwInit();

    // Tell GLFW to not create an OpenGL context since we're using Vulkan
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    // Create the Vulkan-compatible window
    GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan Window", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window!" << std::endl;
        return -1;
    }

    initVulkan();  // Vulkan initialization
    mainLoop(window);  // Run the render loop
    cleanup(window);  // Cleanup resources

    return 0;
}
