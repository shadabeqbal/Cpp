#include<iostream>
#include"/usr/include/python2.7/Python.h" // path to python headers found in(python2.7/include/Python.h) change it according to your path.
using namespace std;
int main()
{
	
	Py_Initialize(); // from here it will initialize all the python funtionality
	
	FILE *fp;
	fp = fopen("test.py","r");
	
	PyRun_SimpleFile(fp,"test.py");
	
	//PyRun_SimpleString("from time import time,ctime\n"
                    // "print 'Today is',ctime(time())\n");
	
	Py_Finalize(); // Ending python functionality
	return 0;
}
