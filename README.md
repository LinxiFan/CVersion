#Determine the version of C family by code only

The function `c_version()` in `version.h` returns an int that denotes the version of C or C++ compiler:

| Return | Version |
| ------ | ------- |
| 0      | C90     |
| 1      | C99     |
| 2      | C11     |
| 3      | C++98   |
| 4      | C++11   |

The method is explained [here](http://kristerw.blogspot.com/2016/07/code-behaving-differently-in-c90-c99.html). 

The hack works by exploiting subtle backward incompatibilities in different versions of C and C++. It does *NOT* depend on any compiler-defined macros (e.g. `__cplusplus`). 

## Run

Make sure you have both `gcc` and `g++` installed. 

Simply call `bash run.sh` to see the output of five different C/C++ compiler versions. 
