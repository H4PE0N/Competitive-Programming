
<pre>
This is where you compile and run the programs that you
have written. Thanks to the  markdown  file,  you  will
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

An example  of  compiling  the  library-compile-program
would be to write:  "make library-compile-program".  An
example     of      compiling      one      of      the
functions-bootup-program   is    like    this:    "make
functions-bootup-program-1".
</pre>
