#include "headers/common.h"
#include "headers/log.h"
#include "headers/director.h"


using namespace std;

int main(){
	bool keep_playing = true;
	Director director;
	Log log;
	fstream myFile;
	while (keep_playing){
	director.prompt_player();
	director.recieve_input();
	}
	return 0;
}
