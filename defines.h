#ifndef DEFINES_H
#define DEFINES_H

#define PROGRAM_BEGIN int main(int argc, char **argv){

#define PROGRAM_END ; return 0; }

#define TRUE true

#define FALSE false

#define JSON ;Variable

#define NUMBER Number

#define STRING String

#define BOOLEAN Boolean

#define ARRAY (*(new Array()))

#define PRINT(x) ;print(x)

#define RETURN return;

#define SET ;

#define ASSIGN =

#define ERASE( ptr ) \
ptr.getArray().clear();  \


#define OBJECT Object<string, Variable >

// #define OBJECT (*(new Object()));

#define KEY(x) Key(x) : (true)?1;

#define SIZE_OF(x) ;Sizeof(x)

#define IS_EMPTY(x) ;IsEmpty(x)

#define TYPE_OF(x) ;TypeOf(x)

#endif //DEFINES_H