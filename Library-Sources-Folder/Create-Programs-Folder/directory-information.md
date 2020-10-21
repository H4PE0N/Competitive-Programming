<pre>
This folder contains programs that you as a user  would
write your code in. Every function in this  library  is
linked to these programs. So you can use  every  single
one of them if you wanted to.

The  master  program  does  not  have  access  to   the
test-functions, that is because they are made to  debug
and test the original functions. This may change in the
future, but for now the test-functions only is for  the
functions-booup-programs.

In the Functions-Bootup-Folder are  they  programs  for
every programming area. That means  that  every  folder
with a specific area has a  different  bootup  program.
That is because you could  write  your  tests  for  the
functions in one area,  and  then  tests  for  another,
without having to run both at once.

If you want to make your own project with help  of  the
library, but don't want to just use this  one  file  to
write your code. Then you can include the  header  file
that is stored in  the  Library-Functions-Folder.  Then
you will have the same access as the master program but
could use more files to write your code in  a  separate
project.

To  then  compile  that  program  you  can  modify  the
makefile that is stored in the Library-Binaries-Folder.
Then you move the makefile in the folder you want  your
own program to be stored, then  you  can  compile.  The
object files for the library should be  stored  in  the
library, and your executable file should be created  in
the folder your makefile is stored.
</pre>
