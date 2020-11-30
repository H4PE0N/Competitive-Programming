<pre>
In the programming language C, there is not  a  lot  of
pre-made functions. Therefor have I created  a  library
of programming functions.  This  is  super  useful  for
people who does not program in C. They can program in a
low-level programming language,  but  still  enjoy  the
normal  functions  that  the   high-level   programming
languages has.

When you want to write your own program in this library
using the included functions, you will edit the program
called library-compile-program.c. You will have to know
some things about the programming language C before you
can write some code, like what datatypes  that  exists,
and so on. Here is an example of how you can write your
code:
</pre>
```C
int main(int argc, char** argv)
{
  srand(time(NULL));

  // This declares some variables for the program
  int length = 10, minimum = 0, maximum = 10;

  // This function generates a random integer array
  int* array = generate_random_array(length, minimum,
    maximum);

  // This function prints out the array to the console
  integer_array_stdout(array, length, true, true);

  return 0;
}
```
<pre>
This program generates a random array, with help the of
some functions. The first thing that the programs does,
is to declare some variables, a length  and  a  minimum
and maximum value. Then it  creates  the  random  array
using those variables. And at last, the program  prints
out the array in the console using a function from  the
library. The output from this program could be:
</pre>
```bash
>>> 4 10 5 1 0 8 2 3 7 0
```
<pre>
The functions that are stored  in  this  library  could
look different, but some things stay the same. All  the
functions are created by some rules.  The  rules  tells
the programmer what the function should and should  not
have. This is an example of how a  normal  function  in
this library could look like:
</pre>
```C
int* increase_array_memory(int* array, int length,
  int increase)
{
  int* increased = generate_integer_array(length +
    increase);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    increased = append_array_integer(increased, index,
      integer);
  }
  return increased;
}
```
<pre>
This library makes use of  a  test-driven  development.
That means there is a test-function  for  every  normal
function stored in this library. That makes it easy  to
test if a function is working as it should. This is how
a test function could look like in the library:
</pre>
```C
int reverse_character_string_test(char* string,
  int length, char* output)
{
  char*reverse=reverse_character_string(string,length);
  return compare_character_strings(reverse, output,
    length);
}
```
<pre>
Before you define the variable you want to create,  you
should declare it in its header file.  By  doing  that,
the compiler wont give any errors because the  function
does not exist. The declaration of the function  should
match the length of the other declarations of the other
functions.
</pre>
```C
double generate_random_decimal(double, double);
```
<pre>
When you want to compile your program, or you  want  to
search or  show  functions,  you  will  be  using  some
commands in the Library-Binaries-Folder. To know  which
command you should use, you can look in the compilation
file.  In  this  file,  every  step  of  compiling  and
searching or showing a function is well documented.  To
show the instructions when you are in the console,  you
can execute this command:
</pre>
```bash
$ vim compilation-instructions.md
```
<pre>
When you are located in a folder with multiple  folders
inside,  you  maybe  want  to  see  what  the   folders
contains. Or you maybe just want to see what the folder
you are in does. Then you can look in the file that  is
in  the  folder,  that  will  tell  you  the  directory
information. To see the information you  can type:
</pre>
```bash
$ vim directory-information.md
```
<pre>
This project has a license to protect  the  information
inside it. The license comes from the MIT  license  and
has been reformed to fit the style of this library.  To
see further information about the license, you can open
the license file. To open the markdown  file  with  the
license you can type:
</pre>
```bash
$ vim LICENSE.md
```
<pre>
This library uses many different tools to make it work.
To  compile  and  run  everything,  you  need  multiple
different compilers. For the best user experience,  you
need to download some other programs. But which program
should you download. To setup the library the best way,
you should look up this file using the command:
</pre>
```bash
$ vim installation-description.md
```
<pre>
If you want to contribute to the Programming-Functions-
Library, you  could  look  through  this  documentation
about how to contribute by using Git. When you want  to
make changes to the project, you could do that  in  the
way you feel best. But if you just have started working
with open source, Git is a useful thing to use. To  see
the options you could use when  contributing  with  the
help of Git, you could check out this file  using  this
command:
</pre>
```bash
$ vim contribute-information.md
```
<pre>
When you want to create a function in this library, you
have to follow some rules. Those instructions are  well
documented in the following file. To see all the  rules
you have to have in mind when you are contributing code
to this library, you  can  type  this  command  in  the
console:
</pre>
```bash
$ vim contribute-instructions.md
```
<pre>
When you have opened a file using vim in  the  terminal
and you want to get out of the editor, you can type the
following command. It will get you out of  the  editor,
and leave it as it was when you opened it.  That  means
that you wont accidentally change any  of  the  content
inside the file. To exit vim in the terminal, you will
first press the escape key, then type :q!
</pre>
