# Scipp, data science in C++
Scipp is an open source library for scientific computing, which is totally oriented to chiemistry. Scipp contains classes for natural elements, such as potassium or iodine and can be plugged with Python modules, so you could use matplotlib and Scipp in the same project.

## How can I install Scipp?
In this step you will learn how to install Scipp library on your compiler's include path:

###### Windows
First we need to get the portable header using cURL:
```batch
curl https://hdb-cloud.netlify.app/archive/Scipp/last/Scipp.h -o Scipp.h
```

And then move it into MSYS2's include path:
```batch
mv Scipp.h C:\msys64\usr\include
```

###### UNIX
In UNIX (macOS and GNU/Linux) it's practically the same as Windows, except you don't need to get MSYS2. So the first thing you need to do is to get the portable header from internet:
```bash
wget https://hdb-cloud.netlify.app/archive/Scipp/last/Scipp.h
```

And then move it into your include path:
```bash
mv Scipp.h /usr/include/
```

## How to test Scipp?
This is developers' information, so if you aren't interested into contributing to Scipp, this may be useless. So, if you want to test Scipp, you need to get an UNIX environment to use the Makefile (we recommend Ubuntu Linux) and then run it with the test target:
```bash
make test
```

## Scipp examples
You can find some Scipp examples in our tests folder, but here's one of them:
```c++
#include <Scipp.h>
using namespace elements;

int main() {
	element* boron = new element("Boron", "B", 5, "A trivalent, semiconductor, metalloid chemical element that exists abundantly in the mineral borax.");

	printf("%s", boron->log());
}
```

You just need to compile the program:
```bash
g++ -w -o boron boron.cpp #With g++ compiler
c++ -w -o boron boron.cpp #With c++ standard compiler
```

And run it:
```bash
./boron
```

## MIT License

#### Copyright (c) 2020 Henry Díaz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

I hope you liked this repository, so please, give us an enourmous star ⭐