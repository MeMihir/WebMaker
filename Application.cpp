#include "Application.h"



void Application::glfw_error_callback(int error, const char * description)
{
	fprintf(stderr, "Error %d: %s\n", error, description);
}

Application::Application()
{
	
	
}

void Application::start() {

}
Application::~Application()
{
	glfwDestroyWindow(window);
	glfwTerminate();
}

void Application::setup()
{
	

	glfwSetErrorCallback(glfw_error_callback);
	if (!glfwInit())
		return;
	window = glfwCreateWindow(1280, 720, "Web Maker", NULL, NULL);
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);
	//disable for systems that dont support vsync

	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	
	ImGuiIO& io = ImGui::GetIO();
	(void)io;
	ImGui_ImplGlfwGL2_Init(window, true);


	//themes
	ImGui::StyleColorsDark();
	io.Fonts->AddFontFromFileTTF("Cousine-Regular.ttf", 18.0);
	
}
