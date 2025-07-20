shell scripting

```bash
echo hello
```

means print "hello"

## vim

- text editor
- how to get in a file 
- ``vim a.txt``
- once inside how to write inside a.txt using vim
- press <mark style="background: #FF5582A6;">  i  </mark>  --> insert
- <mark style="background: #FF5582A6;"> a  </mark>  --> append
- press <mark style="background: #FF5582A6;">  esc  </mark> to get out of insert mode
- :w --> to write the file
-  :q  --> to exit the file
- we can also combine these functions write and exit :wq
- :q! quit vim without saving the changes

to write a shell script save the file as ==shelltest.sh==
- write `echo hello world!`
- esc --> :wq

to execute the file in terminal `bash shelltest.sh`


<mark style="background: #BBFABBA6;">what is a bash shell</mark>

### Scripts start with a bash bang.

Scripts are also identified with a `shebang`. Shebang is a combination of `bash #` and `bang !` followed the the bash shell path. This is the first line of the script. Shebang tells the shell to execute it via bash shell. Shebang is simply an absolute path to the bash interpreter.

Below is an example of the shebang statement.

```bash
#! /bin/bash
```

how to get the path

```bash
echo $SHELL
```

```OUTPUT
/bin/bash
```

rewrite shelltest.sh as ==mycode==

```bash
#!/bin/bash
echo helloworld
```

now to execute without bash like `./shelltest.sh`
!! WE SHOULD ALWAYS SPECIFY THE PATH AT THE TOP

now to sun the sh file

```bash
 ./shelltest.sh
```

```OUTPUT
bash: ./shelltest.sh: Permission denied
```

TO fix the permission denied issue  we need to give permission to the file permission to get executed

current permission for shelltest.sh
![[Pasted image 20250720092120.png]]

```
ls -l
```

the -l is a flag for showing the long format

to Provide ==execution rights to your user==.

Modify the file permissions and allow execution of the script by using the command below:

```bash
chmod u+x hello_world.sh
```

`chmod` modifies the existing rights of a file for a particular user. ==We are adding `+x` to user `u`.==


![[Pasted image 20250720093130.png]]


# Variables

![[Pasted image 20250720093257.png]]


```bash
#!/bin/bash
echo what is your first name ?
read first_name
echo what is your last name ?
read last_name

echo hello $first_name $last_name
```

inserting value into a variable 

```bash
#!/bin/bash
# A simple variable example
greeting=Hello
name=Tux
echo $greeting $name
```

![[Pasted image 20250720094622.png]]

![[Pasted image 20250720094709.png]]
possiton 0 is reserved for the shell itself

```bash
#!/bin/bash
echo hello $1 $2
```

![[Pasted image 20250720095227.png]]

# piping

![[Pasted image 20250720095411.png]]

if the op of a command is very long and we need to filter it out
![[Pasted image 20250720114310.png]]

to filter this we use piping
![[Pasted image 20250720114547.png]]

to pipe 

![[Pasted image 20250720114625.png]]

so here we send the output from one command to anoter by using pipe symbol  <mark style="background: #FF5582A6;"> | </mark>

grep --> used to filter out words

# Output redirrection

`>` and `>>` 

used to send output from a command to a file

<mark style="background: #FFF3A3A6;">use cases</mark>

-  logging to a text flie using tmestamp
- dynamic creating
![[Pasted image 20250720115410.png]]
 ![[Pasted image 20250720124209.png]]

so this means helo file was over written
means `>` always ==overwrite== the exciting file
 `>>` is used to ==append== the data
 
![[Pasted image 20250720124431.png]]

### to get input form the text file 

`<` or `<<` or `<<<`

to get the word count
```
$ wc -w hello.txt
5 hello.txt
```
#  Arithmetic Expressions

| Operator | Usage          |
| -------- | -------------- |
| +        | addition       |
| -        | subtraction    |
| *        | multiplication |
| /        | division       |
| **       | exponentiation |
| %        | modulus        |
```bash
#!/bin/bash
var=$((3+9))
echo $var
```
