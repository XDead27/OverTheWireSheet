//#define _GNU_SOURCE
//#include <dlfcn.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// Define an alternative name for strcmp()
//int (*orig_strncmp)(const char *str1, const char *str2, size_t n);
//
//int strncmp(const char *str1, const char *str2, size_t n) {
//
//    // Backup the orginal call to strcmp() in orig_strcmp()
//    // by initialazing the pointer of orig_strcmp().
//    if(!orig_strncmp) orig_strncmp = dlsym(RTLD_NEXT, "strncmp");
//
//    printf("You should try '%s'\n", str1);
//    // system("/bin/bash");
//    // return the proper result of strcmp() 
//    return orig_strncmp(str1,str2,n);
//}

#define _POSIX_SOURCE
#include <dirent.h>
#include <stdio.h>

DIR *opendir(const char *dirname) {

    printf("Overloaded.");

    return NULL;
}
