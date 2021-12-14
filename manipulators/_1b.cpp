/*
ws: It is defined in istream and is used to ignore the whitespaces in the
    string sequence.

ends: It is also defined in ostream and it inserts a null character into the
      output stream. It typically works with std::ostrstream, when the associated output buffer needs to be null-terminated to be processed as a C string.

flush:It is also defined in ostream and it flushes the output stream, i.e. it
      forces all the output written on the screen or in the file. Without flush, the output would be the same, but may not appear in real-time.

Independent flags (switch on):
  * boolalpha : Alphanumerical bool values (function )
  * showbase : Show numerical base prefixes (function )
  * showpoint : Show decimal point (function )
  * showpos : Show positive signs (function )
  skipws : Skip whitespaces (function )
  unitbuf : Flush buffer after insertions (function )
  * uppercase : Generate upper-case letters (function )
Independent flags (switch off):
  noboolalpha : No alphanumerical bool values (function )
  noshowbase : Do not show numerical base prefixes (function )
  noshowpoint : Do not show decimal point (function )
  noshowpos : Do not show positive signs (function )
  noskipws : Do not skip whitespaces (function )
  nounitbuf : Do not force flushes after insertions (function )
  nouppercase : Do not generate upper case letters (function )
Numerical base format flags ("basefield" flags):
  dec : Use decimal base (function )
  hex : Use hexadecimal base (function )
  oct : Use octal base (function )
Floating-point format flags ("floatfield" flags):
  fixed : Use fixed floating-point notation (function )
  scientific : Use scientific floating-point notation (function )
Adustment format flags ("adjustfield" flags):
    internal : Adjust field by inserting characters at an internal
                position(function )
    left : Adjust output to the left (function )
    right : Adjust output to the right (function )
*/
