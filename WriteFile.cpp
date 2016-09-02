#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   wf->output_file.open(file_name);
   wf->closed = false;
}

WriteFile::~WriteFile()
{
   close();
}


void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}


void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
