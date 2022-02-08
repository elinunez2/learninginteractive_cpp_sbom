#pragma once 
#include "common.h"

class Lesson{
	private:
		std::string file01 = "./textfiles/referencing-v-dereferencing.txt";
		std::string file02 = "./textfiles/singleton.txt";
		std::string file03 = "./textfiles/makefiles.txt";
	public:
		void loadLesson(int option);

};
