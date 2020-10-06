
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

If your program get's an  error  you  could  debug  the
program using gdb, by  typing  `gdb <binary-filename>`.
There is so many things you can do with  the  debugger,
so to list all of the commands would be a wast of time.
To exit out of the gdb debugger you can type `quit`.

When you compile a program  using  make,  the  Makefile
wants to print  out  what  commands  it  is  using.  To
prevent this, you could use the `-s` option  to  silent
the Makefile. Then  there  will  be  no  more  commands
printing out in the console.
</pre>
