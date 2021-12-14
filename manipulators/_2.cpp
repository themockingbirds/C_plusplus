/*
setfill (‘*’), and many more. These all are defined in the header file. If we want to use these manipulators then we must include this header file in our program.

For Example, you can use following manipulators to set minimum width and fill the empty space with any character you want: std::cout << std::setw (6) << std::setfill (’*’);

Some important manipulators in <iomanip> are:

setw (val): It is used to set the field width in output operations.

setfill (c):  It is used to fill tempty space with the character ‘c’ on output stream .

setprecision (val): It sets val as the new value for the precision of floating-point values.

setbase(val): It is used to set the numeric base value for numeric values.

setiosflags(flag): It is used to set the format flags specified by parameter mask.

resetiosflags(m): It is used to reset the format flags specified by parameter
                  mask.
*/
