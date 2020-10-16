# Scippy, use Scipp on Python
Scippy is an open API that uses Scipp DLLS (only C programmed libraries, for example not chemistry.so/dll) in Python programming language.

## Setting up Scippy

###### PIP
Just get it by your command line typing the following command:
```bash
pip install scippy
```

###### Scipp CLI
First, you need to get the Scipp CLI tool, you can download it by going to https://github.com/HDB-PROGRAMMING/Scipp/releases and getting the latest release as a `.zip` file, then unzip it in `C:\Scipp` if you are in Windows or `~/Scipp` if you are in a UNIX like OS, then go to your PATH variable and add the dir you unzipped Scipp bins. Next go to your command line and type the following command:
```bash
scipp init py
```

And you will have done, you can use Scippy now in you Python projects.

## Examples
Here you can find some Scippy examples:

###### Constants
```python
import scippy

smaths = scippy.scippy_lib(SCIPP_MATHS)

if __name__ == '__main__':
	smaths.lib().π
	smaths.lib().e
	smaths.lib().T
	smaths.lib().c
```

###### Functions
```python
import scippy

smaths = scippy.scippy_lib(SCIPP_MATHS)

if __name__ == '__main__':
	fib=smaths.lib().fibonacci(10) #10 numbers

	fib
```

I hope you liked Scippy, so please give us a star ⭐ on our GitHub repository.