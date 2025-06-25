#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>


int main() {

	// Initialize GLFW
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);

	// Create a windowed mode window and its OpenGL context
	GLFWwindow* window = glfwCreateWindow(800, 800, "PhyEngine Simulation", NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to Create GLFW Window" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);


	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}
	

	// Clean up and exit
	glfwDestroyWindow(window);
	glfwTerminate();


	return 0;
}