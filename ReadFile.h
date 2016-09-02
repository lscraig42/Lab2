//Modified by Landon Craig on 9/2/16
#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//This is a class that contains three variables, a constructor, a destructor, and three functions.
class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;
	public:
		ReadFile(const char* file_name);
		~ReadFile();
		String* readLine();
		bool eof();
		void close();
};

#endif