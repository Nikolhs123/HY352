#include "Operators.h"
#include "defines.h"
PROGRAM_BEGIN

//simple variables declaration
JSON(string1) = STRING("Hello,")
JSON(string2) = STRING(" world!")

PRINT(string1)
PRINT(string2)

JSON(num1) = NUMBER(23.5)
JSON(num2) = NUMBER(23.5)

PRINT(num1)
PRINT(num2)

JSON(bool1) = BOOLEAN(TRUE)
PRINT(bool1)

JSON(bool2) = BOOLEAN(FALSE)
PRINT(bool2)

//empty array declaration
JSON(empty) = ARRAY

//array declarations
JSON(ar) = ARRAY [
    string1, num1 , STRING("mesaa")
]
PRINT(ar)

JSON(array1) = ARRAY[
    NUMBER(22), NUMBER(23)
]
PRINT(array1)

JSON(array2) = ARRAY[
    NUMBER(85), NUMBER(62.5)
]
PRINT(array2)

//more complex array declaration
JSON(complexar) = ARRAY [ 
    ar , ARRAY [ num1 ] ,
     ARRAY [ ar , ar]
]
PRINT(complexar)

//example with week temperatures
JSON(week_temperatures) = ARRAY [
    NUMBER(20),NUMBER(19.5),NUMBER(19),NUMBER(20),
    NUMBER(19),NUMBER(18.5),NUMBER(19)
]

PRINT(week_temperatures)

//set third position of array as value 22
SET week_temperatures[2] ASSIGN NUMBER(22)

//print again to see that value has changed
PRINT(week_temperatures)

JSON(obj) = OBJECT 
    ("Dijkstra",string1) 
    ("LALALLA", string2)
PRINT(obj)

JSON(obj2) = OBJECT 
    ("lalala",string1) 
    ("iw", string2)
PRINT(obj2)

;ERASE(array1)

//sum of objects, arrays ,strings and numbers
JSON(sumarr) = array1 + array2
PRINT(sumarr)

JSON(sumstrings) = string1 + string2
PRINT(sumstrings)

JSON(sumnums) = NUMBER(85) + NUMBER(84)
PRINT(sumnums)

//check other operators for numbers only
JSON(subnums) = num1 - num2
PRINT(subnums)

JSON(mulnums) = num1 * num2
PRINT(mulnums)

JSON(divnums) = num1 / num2
PRINT(divnums)

JSON(pernums) = num1 % num2
PRINT(pernums)

JSON(biggernum) = num1 > num2
JSON(smallernum) = num1 < num2
JSON(smeqnum) = num1 <= num2
JSON(bigeqnum) = num1 >= num2

//check boolean values
JSON(andb) = bool1 && bool2
JSON(orb) = bool1 || bool2

JSON(equalnum) = num1 == num2
PRINT(equalnum)
JSON(equalstr) = string1 == string2

// SIZE_OF(string1)
// IS_EMPTY(array1)
// TYPE_OF(string1)


//PRINT(TYPE_OF(emp))

PROGRAM_END