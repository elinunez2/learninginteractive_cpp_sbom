#include "headers/common.h"
#include "headers/filemanip.h"
#include "headers/log.h"


void FileManip::ReadFile(std::string filename){
	Log log;
	std::fstream myFile;
	myFile.open(filename,std::ios::in); //read mode
	if (!myFile.is_open()){
		log.SendMessage(log.LogLevelError, "File not found in Directory!");
	}
		else{
		std::string line;
		/*read a line of text, and then store that text into the variable 'line'
		 * This function is from the <string> library*/
		while (getline(myFile,line)){
			std::cout << line << std::endl;
		}
		myFile.close();
	}
}

void FileManip::TestFunction(){
	std::cout << "testing123";
}
