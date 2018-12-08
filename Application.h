#pragma once

#ifndef APPLICATION_H
#define APPLICATION_H

#include "WebPage.h"
#include <iostream>
#include "GLFW/glfw3.h"
#include "imgui.h"
#include "imgui_impl_glfw_gl2.h"

class Application
{
public:

	static void glfw_error_callback(int error, const char* description);

	Application();
	void start();
	~Application();

private:
	GLFWwindow* window;
	ImVec4 background_color = ImVec4(0.45f, 0.55f, 0.6f, 1.00f);
	
	void setup();

};	


#endif // !APPLICATION_H


