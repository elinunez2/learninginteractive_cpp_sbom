#include "./headers/common.h"
#include "./headers/lessons.h"
#include "./headers/filemanip.h"
#include "./headers/log.h"

void Lesson::loadLesson(int option){
	FileManip filemanip;
	Log log;
	switch (option){
		case 1:
			filemanip.ReadFile(Lesson::file01);
			break;
		case 2:
			filemanip.ReadFile(Lesson::file02);
			break;
		case 3:
			filemanip.ReadFile(Lesson::file03);
			break;
		default:
			log.SendMessage(log.LogLevelError,"File Option not recognized!");
			
	}
}
