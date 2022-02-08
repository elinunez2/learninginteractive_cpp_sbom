#include "headers/common.h"
#include "headers/log.h"
#include "headers/director.h"


using namespace std;
//cout << "\nhopeully we exited by now" << endl;
//log.SendMessage(log.LogLevelError,"Hello, I'm printing an error");
//log.SendMessage(log.LogLevelWarning, "This is a warning");
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
