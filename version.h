#define RELEASE_VER_MAIN    5
#define RELEASE_VER_SUB     6

#define TOSTRING2(arg) #arg
#define TOSTRING(arg) TOSTRING2(arg)

#define RELEASE_VER_STR     TOSTRING(RELEASE_VER_MAIN) "." TOSTRING(RELEASE_VER_SUB)
