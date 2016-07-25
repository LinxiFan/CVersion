#define VERSION_C90 0
#define VERSION_C99 1
#define VERSION_C11 2
#define VERSION_Cpp98 3
#define VERSION_Cpp11 4

#define _Check11(U) sizeof(U"a"[0])
/* http://kristerw.blogspot.com/2016/07/code-behaving-differently-in-c90-c99.html 
 * based on Don Yang's submission to the 2015 International Obfuscated C Contest
 */
int c_version() {
    /* will be 1 is C90 because C90 does not support double-slash comment */
    int value_c90 = 2 //**/2
        ;
    /* C++11 and C11 have wide string literals 'U' */
    int value_11 = _Check11("");
    /* C and C++ ahve different char size */
    int value_cpp = sizeof('a');

    if (value_c90 == 1) {
        return VERSION_C90;
    } else if (value_11 == 1 && value_cpp == 4) {
        return VERSION_C99;
    } else if (value_11 == 4 && value_cpp == 4) {
        return VERSION_C11;
    } else if (value_11 == 1 && value_cpp == 1) {
        return VERSION_Cpp98;
    } else if (value_11 == 4 && value_cpp == 1) {
        return VERSION_Cpp11;
    }
}
