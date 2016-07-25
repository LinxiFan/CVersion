#include "stdio.h"
#include "version.h"

int main() {
    int version = c_version();
    switch(version) {
        case VERSION_C90: printf("C90\n"); break;
        case VERSION_C99: printf("C99\n"); break;
        case VERSION_C11: printf("C11\n"); break;
        case VERSION_Cpp98: printf("C++98\n"); break;
        case VERSION_Cpp11: printf("C++11\n"); break;
        default: printf("ERROR\n");
    }
}
