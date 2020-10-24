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
```bash
$ make library-compile-program
```
<pre>
When you compile a program, the makefile wants to print
out the commands it is using to compile the program. To
turn this off, to hide the commands from the user,  you
can use the -s flag, it makes the compile silent.
</pre>
```bash
$ make -s library-compile-program
```
<pre>
When you have compiled the  default  program,  and  you
want to run the executable file that was created in the
folder. You will run the file by typing  the  following
command inside the terminal:
</pre>
```bash
$ ./library-compile-program
```
<pre>
When you download the library, you wont know  what  any
of the functions is called  at  first.  To  know  which
function you should use you can search it up and see if
it does what you  want  it  to  do.  To  search  for  a
function you will use some keywords, it is  words  that
are common in the programming  world,  like  array  and
integer.
</pre>
```bash
$ python search-functions-program.py search <keywords>
```
<pre>
When you have searched up a function and  want  to  see
what the function does, you can use the  show  command.
The show  command  will  print  a  description  of  the
function, then the parameters of the function,  and  at
last what the function returns.
</pre>
```bash
$ python search-functions-program.py show <function>
```
<pre>
The first time you try to compile a program  using  the
makefile, you will meet a problem. The problem is  that
you have to have some folders, to get these folders you
can use a command. To generate the folders you need you
can type:
</pre>
```bash
$ make generate-object-folders
```
<pre>
If the program you wrote does not work,  if  it  has  a
problem. You  can  debug  the  program  using  the  gdb
debugger. To start the debugger on the default  program
you can type  the  following  command.  There  is  many
commands you can use inside the debugger,  so  to  list
them all would be a wast  of  time.  But  to  exit  the
debugger, you will type `quit`.
</pre>
```bash
$ gdb ./library-compile-program
```
