
<pre>
This is where you compile and run the programs that you
have written. Thanks to the  makefile  file,  you  will
only have to write "make" and then the program you want
to compile. The first time you compile,  it  will  take
some time.  That  is  because  the  makefile  wants  to
compile every  object  file  that  is  needed  for  the
executable file. After that is done,  the  compile-time
will be much faster, then you only have to compile  the
files that you changed.

The makefile also has some targets to remove the object
files and the executable files. That makes it  easy  to
public or move to another computer if you want to  have
the project there.

To be able to compile the programs you want,  you  will
have to generate the folders that is needed, this  will
only have to happen once. To generate the  folders  you
will type: `make generate-objects-folders`.

An example  of  compiling  the  library-compile-program
would be to write:  `make library-compile-program`.  An
example     of      compiling      one      of      the
functions-bootup-program   is    like    this:    `make
functions-bootup-program-1`.

If your program gets  an  error  you  could  debug  the
program using gdb, by  typing  `gdb <binary-filename>`.
There is so many things you can do with  the  debugger,
so to list all of the commands  would  be  a  waste  of
time. To exit out of the  gdb  debugger  you  can  type
`quit`.

When you compile a program  using  make,  the  makefile
wants to print  out  what  commands  it  is  using.  To
prevent this, you could use the `-s` option  to  silent
the makefile. Then  there  will  be  no  more  commands
printing out in the console.

If you don't know what function you want  to  use,  you
could search for functions in the library  and  see  if
you can find some that you  want.  How  to  search  for
functions in the library, is very easy. In the  compile
folder, there is a python script that you want to  use.
By   typing   in    `python search-functions-program.py
search`, you're now searching for every function in the
library.

But it is hard to find a  function  out  of  all  those
functions, so you can narrow it  down  by  typing  some
keywords after `search`. For  example,  if  I  want  to
search for a function that has with arrays and integers
to do, you will type: `search array integer`.

When you want to take a look at the function  you  have
found or just got the name  on,  you  can  use  another
command:     `python search-functions-program.py show`.
This  command  is  going  to  show   the   description,
parameters and what the function  returns.  To  show  a
function you will input its name after `show`. Lets say
the functions name is `add_array_integer`, then  you're
going to write: `show add_array_integer`.
</pre>
