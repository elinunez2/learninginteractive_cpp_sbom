#include "headers/common.h"
#include "headers/director.h"
#include "headers/filemanip.h"
#include "headers/log.h"
#include "headers/lessons.h"


Director::Director(){
	std::string name = "The Director";
	std::cout << "\nHello, my name is " << name << ", welcome to learning c++ from yours truly!" << std::endl;
}
void Director::prompt_player(){
	std::cout << "Please enter an option to learn from!:" << std::endl;
}
/*Check if input is an integer*/
void Director::recieve_input(){
	Log log;
	FileManip filemanip;
	Lesson lesson;

	std::string file;
	filemanip.ReadFile("./textfiles/useroptions.txt");
	std::string user_decision;
	std::cin >> user_decision;
	/*Check if user input is an integer*/
	for (int i = 0; i < user_decision.length(); i++){
	if (isdigit(user_decision[i]) == false){
		log.SendMessage(log.LogLevelWarning,"Please input a number");
		recieve_input();
	}
	}
	//else, if it is a digit, do this! 
	int user_input = stoi(user_decision); //turn into in
	switch(user_input){
	case 1:
		lesson.loadLesson(1);
		break;
	case 2:
		lesson.loadLesson(2);
		break;
	case 3:
		lesson.loadLesson(3);
		break;
	case 4:
		std::cout << "Thank you for learning! Learning is life. Learning is good" << std::endl;
		exit(0);

	default:
		break;
}
		
}
