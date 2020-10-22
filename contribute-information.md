<pre>
When you want to contribute to the project,  you  first
need to clone the repository. To clone  the  repository
to your computer you will have to have  Git  downloaded
on your computer. Then you can type  the  following  to
get a copy of the project:
</pre>
```bash
$ git clone
```
<pre>
When you have cloned the project to your computer,  and
you want to start contributing by making  some  changes
or just fixing something from an issue. Then  you  will
have to create a new branch to make your changes in. To
list all the existing branches you can type:
</pre>
```bash
$ git branch
```
<pre>
To make a new branch, you will use the last command but
add the new branch name to the end of the command. Lets
say you want to create a new branch called new-feature,
the you write the last command but with the new branch-
name at the end.
</pre>
```bash
$ git branch <branch-name>
```
<pre>
To start making changes to  the  project  in  your  new
branch, you can visit the branch by using the following
command. The command will display the project  like  it
is in the inputted branch. To come to the  branch  that
you are going to work in, you  will  type  the  command
with the branch-name at the end.
</pre>
```bash
$ git checkout <branch-name>
```
<pre>
When you have either changed or created a new  file  in
the project, you can see the changes you have  done  by
using the following command. This command will  display
the files that have been changed, not  the  content  of
those files. For that you will use another command.
</pre>
```bash
$ git status
```
<pre>
When you have changed some files and want to  see  what
content you have changed, you can  use  this  function.
This function displays the content of the changed files
that have either been deleter or added to the file.
</pre>
```bash
$ git diff
```
<pre>
When you have done your changes to the project, you can
save the changes by doing  a  commit.  But  to  do  the
commit, you will first have to add the changes you have
done. To add a file to be in the commit, you will  type
the following command with the filename at the end.  If
you want to add every file that  you  have  changed  or
created, you can use a dot as the filename.
</pre>
```bash
$ git add <filename>
```
<pre>
To commit the changes you have done, after adding  them
to be  in  the  commit,  you  will  use  the  following
command. This command groups up the  changes  you  have
done and sets a message to the commit. The  message  is
usually a comment that tells everyone what the  changes
are about, which files that was changed and so on.
</pre>
```bash
$ git commit -m "<commit-message>"
```
<pre>
When you have done some changes and committed  them  to
your feature branch, you want to propose the changes in
GitHub. To publish your changes to GitHub, so the other
programmers can se what you have done,  you  will  type
the first command. If  the  first  command  returns  an
error, it is because you have not yet created a  remote
branch. To create a remove branch and push the changes,
you will use the second command.
</pre>
```bash
$ git push

$ git push --set-upstream origin <branch-name>
```
<pre>
pull request

When  you  want  to  continue  making  changes  to  the
project, you will have to be in sync  with  the  public
version of the project. To be at the same level as  the
remote repository, you can use the following command to
fetch the changes:
</pre>
```bash
$ git fetch
```
<pre>
When you have  fetched  the  changes  from  the  remote
repository, you  want  to  merge  them  to  your  local
branches. To do that you can use the following command.
To update your local branch, you  will  be  located  in
that branch. Then you will merge  it  with  the  remote
version of the branch, by typing the remote  branch  at
the end of the command.
</pre>
```bash
$ git merge <branch-name>
```
