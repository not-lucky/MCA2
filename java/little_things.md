# uwu

- cant use non-staic obj. in static context, following is wrong (compiler error, a is non-static). Can use static in non though.

```java
int a =5;
static int b = a;
```

- cant initialize static var in non-static method.
- use non-stat var in static meth. - making obj.
- all variables in static meth. - static by default

- during overloading method, access privi. should be same or higher
- same with overriding
- classes can only be public or default. inner classes can be anything though.

- hascode() - `S[0] *31^(n-1) + S[1]* 31^(n-2)....`

## usuw

Character

- getNumericValue(c)
- isLetter(c)
- isDigit(c)
- isUpperCase(c)
- toUpperCase(c)
- isWhitespace(c)

Integer

- parseInt(S)
- valueOf(int i)

String

- charAt(i)
- concat(S)
- contains(S)
- 
    charAt(int index): returns the character at the specified index in the string.
    length(): returns the length of the string.
    substring(int beginIndex, int endIndex): returns a substring of the string.
    indexOf(int ch): returns the index of the first occurrence of the specified character in the string.
    startsWith(String prefix): checks if the string starts with the specified prefix.
    endsWith(String suffix): checks if the string ends with the specified suffix.
    toUpperCase(): returns a new string with all characters converted to uppercase.
    toLowerCase(): returns a new string with all characters converted to lowercase.
    trim(): returns a new string with leading and trailing whitespaces removed.

### list all important String, Stringbuffer, integer and character methods

Here are some important methods of String, StringBuffer, Integer, and Character classes in Java:

**String class methods:**

- `charAt(int index)`: returns the character at the specified index in the string.
- `length()`: returns the length of the string.
- `substring(int beginIndex, int endIndex)`: returns a substring of the string.
- `indexOf(int ch)`: returns the index of the first occurrence of the specified character in the string.
- `startsWith(String prefix)`: checks if the string starts with the specified prefix.
- `endsWith(String suffix)`: checks if the string ends with the specified suffix.
- `toUpperCase()`: returns a new string with all characters converted to uppercase.
- `toLowerCase()`: returns a new string with all characters converted to lowercase.
- `trim()`: returns a new string with leading and trailing whitespaces removed.

**StringBuffer class methods:**

- `append(String str)`: appends the specified string to the buffer.
- `insert(int offset, String str)`: inserts the specified string into the buffer at the specified index.
- `replace(int start, int end, String str)`: replaces the characters between the specified indices with the specified string.
- `delete(int start, int end)`: removes the characters between the specified indices from the buffer.
- `reverse()`: reverses the order of the characters in the buffer.

