#ifndef FILEIPS_H_INCLUDED
#define FILEIPS_H_INCLUDED
#include<cstdio>
#include "Record.h"
class fileIps:public Record {
        FILE * fPtrOut;
        char new_string[95];
        int i, j;
public:
	fileIps();
    ~fileIps() { fclose(fPtrOut); }
	
	// function declarations
	void create_string();
	void write_string();
};

 fileIps::fileIps() {
	fPtrOut = fopen("example.txt", "w");
	new_string[0] = {};
	i = 0; j = 0;
}

 void fileIps::create_string()
 {
	 while (!feof(fPtrOut))
	 {
		 int i = 0; int j = 0;
		 while ((new_string[i++] = title[j++]) != '\n');
		 new_string[i - 1] = ','; j = 0;
		 while ((new_string[i++] = intercomNum[j++]) != '\n');
		 new_string[i - 1] = ','; j = 0;
		 while ((new_string[i++] = dept[j++]) != '\n');
		 new_string[i - 1] = '\0';
	 }
	 return;
 }

 void fileIps::write_string() {
	 fprintf(fPtrOut, "%s", new_string);
	 return;
 }

#endif // FILEIPS_H_INCLUDED
