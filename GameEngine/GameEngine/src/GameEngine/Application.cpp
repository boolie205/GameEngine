#include "Application.h"
#include <iostream>

namespace GameEngine {
	Application::Application()
	{

	}
	Application::~Application()
	{

	}

	void Application::Run() 
	{
		int test = 5;
		int* testPoint = &test;
		std::cout << &testPoint << std::endl;

		if (testPoint) {
			std::cout << "huh" << std::endl;
		}
	}
}	