//Modified by Landon Craig on 9/2/16
#include "ReadFile.h"
#include <iostream>
#include <string>

//This is the ReadFile constructor, which aids in creating the class.
ReadFile::ReadFile(const char* file_name)
{	
	input_file.open(file_name);
	closed = false;
	_eof = false;
}

//This is the ReadFile destructor, which is used to destory the class after the program is finished using it.
ReadFile::~ReadFile()
{
	close();
}

//readLine is a function of the class ReadFile. readLine reads lines from a text file.
String* ReadFile::readLine()
{
	if (closed) return NULL;
	if (_eof) return NULL;
	
	string text;
	_eof = !(getline(input_file, text));
	
	String* str = new String((const char*) text.c_str());
	return str;
}

//eof is a function that is of the class ReadFile and returns true if at the end of a file.
bool ReadFile::eof()
{
	return _eof;
}

//close is a function that simply closes the file after the program is finished using a file.
void ReadFile::close()
{
	if (!closed)
	{
		input_file.close();
		closed = true;
	}
}