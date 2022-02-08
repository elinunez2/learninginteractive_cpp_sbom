#include "./headers/common.h"
#include "./headers/log.h"

void Log::SendMessage(int level, const char* message){

	switch(level){
		case 0:
			Error(message);
			break;
		case 1:
			Warn(message);
			break;
		case 2:
			Info(message);
			break;
		default:
			break;
	}
}
/*this is  pointer not to a char, but in this case an array of chars*/
void Log::Warn(const char* message){
	std::cout << "\t[WARNING]: "<<  message << std::endl;
}
void Log::Error(const char* message){
	std::cout << "\t[ERROR]: "<<  message << "\n\n";
	exit(0);
}
void Log::Info(const char* message){
	std::cout << "[INFO]: "<<  message << std::endl;
}

