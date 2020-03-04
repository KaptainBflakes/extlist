#include <filesystem>
#include <iostream>
#include <string>
//requires std:c++17 to function.
using namespace std;
using namespace std::filesystem;
int main(int argc, char ** argv){
	//argv[1] gives the extension argv[2] is the input directory 
	string dir=".\\";//If on linux, change this shit to a "./"
	if(argc==3){
		dir=argv[2];
	}
	string out="";
	for(auto& entry: directory_iterator(dir)){
		if(entry.path().has_extension()){
			if(entry.path().extension()==argv[1]){
				out+=entry.path().string();out+="\n";
			}
		}
	}
	cout<<out;
	return 0;
}