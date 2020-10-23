<pre>
When you create a function, you  have  to  follow  some
rules. The rules makes the  structure  of  the  library
constant. The first rule that you have to follow,  when
you are creating a  function,  is  to  cut  every  line
before it reaches 56 characters. When every line in the
programs ends at 56 characters, it  forms  a  beautiful
line. The rule that says that every line should end  at
56 characters, is called `the for-loop rule`. It  comes
from the standard for-loop, and looks like this:
</pre>
```C
{
  for(int index = 0; index < length; index = index + 1)
}
```
<pre>
The second rule says that every program should  end  at
100 lines. That makes  it  easy  to  look  through  the
programs without get lost so easily. If you  need,  and
that will happen, to write  more  code  than  just  100
lines to create your functions.  You  should  break  it
down to multiple programs  that  each  have  a  maximum
length of 100 lines of code inside them.

The third rule says that every function  should  be  at
most 10 lines of code. This rule is made  to  make  the
functions cleaner. By the clean-code  standard,  should
the functions be broken down to more smaller  functions
with only 10 lines of  code.  That  makes  it  easy  to
follow the code in the  function,  and  makes  it  more
logical. This is an example of  how  a  function  could
look like:
</pre>
```C
int* shuffle_integer_array(int* array, int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    int random = generate_random_integer(0,length - 1);
    array = switch_array_integers(array, index,random);
  }
  return array;
}
```
<pre>
Because this  project  takes  to  account  `test-driven
development`, there is equally many  test-functions  as
there are normal library functions. The only  exception
to  this  fact,  is  the  `random`  and  the   `stdout`
functions. They can not be tested for their output.

When you want to create a new function, you should make
the test-function first, if the function allows a test-
version of it. Then you will call the test-function  in
the function-bootup-program that matches the  functions
folder. You will call it with some inputs and print out
the output in the console.

After you have setup the function to be tested, you can
make the  actual  function.  Remember  to  declare  the
function in its header file.

When you have done some changes  and  want  to  publish
them by commit  the  changes,  you  should  delete  the
object-files and the binary-files. To do that you  will
use the makefile. In the makefile there is some targets
you could use. To delete all the object-files, you will
use the first command. And to delete the  binary-files,
you will use the second command.
</pre>
```bash
$ make remove-object-programs

$ make remove-binary-programs
```
<pre>
When you want to create  a  new  function,  you  should
think of some things. One of the things you should keep
in mind is to name the function with three words.  That
makes it more informative, but still not to  long.  The
perfect name for a function is three words long, not to
short and not to long, and that says a  lot  about  the
function it self.
</pre>
