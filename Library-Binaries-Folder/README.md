<pre>
This is where you compile and run the programs that you
have written. The first time you compile, it will  take
some time.  That  is  because  the  makefile  wants  to
compile every  object  file  that  is  needed  for  the
executable file. After that is done,  the  compile-time
will be much faster, then you only have to compile  the
files that you changed.

The makefile also has some targets to remove the object
files and the executable files. That makes it  easy  to
public or move to another computer if you want to  have
the project there.

When you have written your program you want to  compile
it. To compile the program, you will use the  makefile,
it is a file  that  lets  you  compile  with  just  one
command. To compile the default program you will  type:
</pre>
```make library-compile-program```
<pre>
When you compile a program, the makefile wants to print
out the commands it is using to compile the program. To
turn this off, to hide the commands from the user,  you
can use the -s flag, it makes the compile silent.
</pre>
```make -s library-compile-program```
<pre>
When you download the library, you wont know  what  any
of the functions is called  at  first.  To  know  which
function you should use you can search it up and see if
it does what you  want  it  to  do.  To  search  for  a
function you will use some keywords, it is  words  that
are common in the programming  world,  like  array  and
integer...
</pre>
```
$ python search-functions-program.py search <keywords>
Function[1]     :     allocate_array_integer
Function[2]     :     generate_integer_array
Function[3]     :     integer_array_length
Function[4]     :     array_contains_integer
Function[n]     :     ...
```
<pre>
When you have searched up a function and  want  to  see
what the function does, you can use the  show  command.
The show  command  will  print  a  description  of  the
function, then the parameters of the function,  and  at
last what the function returns.
</pre>
```
$ python search-functions-program.py show <function>

A sentence is made by multiple strings in a  list.  You
can remove one of the strings using this  function.  It
will remove the last of the inputted string.

Parameter[1]    :     char** sentence
Parameter[2]    :     int height
Parameter[3]    :     char* string

Returning       :     char** sentence
```
<pre>
The first time you try to compile a program  using  the
makefile, you will meet a problem. The problem is  that
you have to have some folders, to get these folders you
can use a command. To generate the folders you need you
can type:
</pre>
```make generate-object-folders```
<pre>
If the program you wrote does not work,  if  it  has  a
problem. You  can  debug  the  program  using  the  gdb
debugger. To start the debugger on the default  program
you can type:
</pre>
```gdb ./library-compile-program```
<pre>
There is so many things you can do with  the  debugger,
so to list all of the commands  would  be  a  waste  of
time. To exit out of the gdb debugger you can type:
</pre>
```quit```
