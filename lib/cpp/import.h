#ifndef SCIPP_DLLS
#define SCIPP_DLLS

#ifdef _WIN32
 #define SCIPP_PATH "C:\\Scipp\\"
#else
 #define SCIPP_PATH "/Scipp/"
#endif
//Scipp path

class scipp_lib {
protected:
	void* lib;

public:
	scipp_lib(str lib) {
		this->lib = dlopen(strcat(SCIPP_PATH, lib), RTLD_LAZY);

		if (!this->lib) {
			fputs(dlerror(), stderr);
			exit(1);
		}
	}
	//scipp_lib constructor

	value_ptr get_function(str function) {
		return (value_ptr)dlsym(this->lib, function);
	}

	val get_variable(str variable) {
		return (val)dlsym(this->lib, variable);
	}
	//Property getters
};
//Scipp library class

#endif
//Scipp import module
