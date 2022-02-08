#ifndef FILEMANIP_H
#define FILEMANIP_H

#include "common.h"

class FileManip{
	public:
		std::string filename;
		void ReadFile(std::string filename);
		void TestFunction();
};

#endif
