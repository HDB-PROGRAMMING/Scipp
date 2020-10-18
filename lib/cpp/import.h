#ifndef SCIPP_DLLS
#define SCIPP_DLLS

#ifdef _WIN32
 #define SCIPP_PATH "C:\\Scipp\\"
#else
 #define SCIPP_PATH "/Scipp/"
#endif
/*Scipp path*/

class scipp_lib {
protected:
	void* lib;

public:
	scipp_lib(char* lib) {
		this->lib = dlopen(strcat(SCIPP_PATH, lib), RTLD_LAZY);

		if (!this->lib) {
			fputs(dlerror(), stderr);
			exit(1);
		}
	}
	/*scipp_lib constructor*/

	void import(char* lib) {
		this->lib = dlopen(strcat(SCIPP_PATH, lib), RTLD_LAZY);

		if (!this->lib) {
			fputs(dlerror(), stderr);
			exit(1);
		}
	}
	/*Library importer*/

	void* get(char* value) {
		return (void*)dlsym(this->lib, value);
	}
	/*Property getter*/
};
/*Scipp library class*/

#endif
/*Scipp import module*/
