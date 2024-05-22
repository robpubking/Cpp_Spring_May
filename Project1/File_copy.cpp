#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <filesystem>

using namespace std;

char* copy_file(char file[]);

char copy_path[30];

int main(void) {

	char file_name[90] = "C:\\Users\\maybl\\Titanic - My Heart Will Go On (Music Video) [3gK_2XdjOdY].mp4";
	char*  my_copy = copy_file(file_name);
	cout << my_copy << endl;


	return 0;

}



char* copy_file(char file[]) {

	ifstream ifs(file, ios::binary);
	
	strcpy(copy_path, "My Heart Will Go On.mp4");
	ofstream ofs(copy_path, ios::binary);
	char instr;

	while (ifs.get(instr)) {
		ofs.put(instr);
	}
	ifs.close();
	ofs.close();
	cout << "file copy finished!" << endl;
	cout << "The new file path is : " << copy_path << endl;
	
	return copy_path;
}