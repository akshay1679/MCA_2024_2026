#linux_comands
https://www.geeksforgeeks.org/basic-linux-commands/
## Commands

ls
pwd  --> current working directory
mkdir  -->  create fresh directories
cd --> 


|         |                                      |                                          |
| ------- | ------------------------------------ | ---------------------------------------- |
| ls      |                                      |                                          |
| pwd     |                                      |                                          |
| mkdir   |                                      |                                          |
| cd      |                                      |                                          |
| rmdir   |                                      |                                          |
| cp      | copy-paste                           |                                          |
| mv      | move                                 | ```mv <file name> <Renamed file name>``` |
| rm      | remove                               |                                          |
| uname   | complete OS information              |                                          |
| touch   | create empty file                    | ```touch <file name><br>```              |
| ln      | create shortcut link to another file |                                          |
| cat     |                                      |                                          |
| clear   |                                      |                                          |
| ps      |                                      |                                          |
| man     |                                      |                                          |
| grep    |                                      |                                          |
| echo    |                                      |                                          |
| wget    |                                      |                                          |
| whoami  |                                      |                                          |
| sort    |                                      |                                          |
| cal     |                                      |                                          |
| whereis |                                      |                                          |
| df      |                                      |                                          |
| wc      |                                      |                                          |
|         |                                      |                                          |

- **Basic Navigation:**
    
    - **Arrow Keys:** Move around within menus and text fields. 
    - **Tab:** Navigate between elements on a screen. 
    - **Shift + Tab:** Navigate backwards. 
    
- **Application Management:**
    
    - **Super + A:** Open the applications menu 
    - **Super + Tab:** Switch between open applications 
    - **Alt + Tab:** Another way to switch between applications 
    
- **Terminal Access:**
    
    - **Ctrl + Alt + T:** Open a terminal window 
    
- **Other Useful Shortcuts:**
    
    - **Super + D:** Show the desktop 
    - **Super + L:** Lock the screen 
    - **Alt + F2:** Run a command directly 
    - **Ctrl + C:** Copy 
    - **Ctrl + V:** Paste 
    - **Ctrl + Z:** Undo

# 1.File management commands
## 1. Files Listing

```
ls
ls -l

```

![[Pasted image 20250718172057.png]]

==Listing file and directory permissions with -l option==

using the -l flag, you can list the permissions of the files and directories as well as other attributes such as folder names, file and directory sizes, and modified date and time.

==Viewing Hidden files==

You can view hidden files by appending the -a flag. Hidden files are usually system files that begin with a full stop or a period.

![[Pasted image 20250718172323.png]]

==Accessing ls man pages==
Alternatively, you can view the manpages to find out more about its usage by running

```
man ls
```

## 2. Creating Files

```
$ touch filename
```

![[Pasted image 20250718173535.png]]

## 3. Displaying File Contents

```
$cat filename
```

![[Pasted image 20250718173738.png]]

to display the contents of a file.

## 4. Copying a File

```
$cp source/filename destination/
```

![[Pasted image 20250718175117.png]]


## 5. Moving a File

```
$ mv source/filename destination/
```

![[Pasted image 20250718175346.png]]

## 6. Renaming a File

=="mv" single file  rename==

![[Pasted image 20250718175639.png]]

==multiple file rename==

**syntax**

```
rename -n 's/old_pattern/new_pattern/' *
```

==we are changing name .txt --> .text for all files that end with txt==

Let's break down the `rename 's/\.txt$/\.txts/' *.txt` command in detail.

This command uses the `rename` utility, which is a powerful tool for batch renaming files in Linux, particularly because it supports Perl-compatible regular expressions.

Here's a breakdown of each part:

1. **`rename`**:
    
    - This is the command itself. As mentioned, it's used for renaming multiple files based on a specified pattern. On some systems, it might be called `perl-rename` or `file-rename`, but often a symbolic link exists to `rename`.
        
2. **`'s/\.txt$/\.txts/'`**:
    
    - This entire string is a **Perl regular expression substitution**. It's enclosed in single quotes (`'...'`) to prevent the shell from interpreting any special characters within it.
        
    - **`s/`**: This is the substitution operator. It signifies that you want to **substitute** (<mark style="background: #FFB8EBA6;">replace</mark>) <mark style="background: #FF5582A6;">a matched pattern with a new string</mark>.
        
    - **`\.txt$`**: This is the **pattern to search for** (the "old pattern"). Let's break it down further:
        
        - **`\.`**: The backslash (`\`) is an **escape character**. In regular expressions, a dot (`.`) is a special character that means "match any single character" (except newline). To match a literal dot, you need to "escape" it with a backslash. So, `\.` specifically matches a literal period (`.`).
            
        - **`txt`**: This simply matches the literal characters "txt".
            
        - **`$`**: This is an **anchor** that signifies the **end of the string** (or in this context, the <mark style="background: #FF5582A6;">end of the filename</mark>).
            
        - **Putting it together:** `\.txt$` means "match the literal string `.txt` only if it appears at the very end of the filename." This is crucial for correctly changing file extensions without affecting filenames that might contain `.txt` elsewhere (e.g., `document.txt.bak`).
            
    - **`/`**: This acts as a **delimiter** <mark style="background: #FF5582A6;">separating the search pattern from the replacement string</mark>.
        
    - **`\.txts`**: This is the **replacement string** (the "new pattern").
        
        - **`\.`**: Again, an escaped dot to match a literal period.
            
        - **`txts`**: The literal string "txts".
            
        - **Putting it together:** `\.txts` means "replace the matched `.txt` with `.txts`."
            
    - **`/`**: This is the final delimiter for the substitution expression. There are optional flags that can go after this, but none are used in this example (e.g., `/g` for global replacement, `/i` for case-insensitive). Since we're matching an anchored pattern at the end, `g` isn't strictly necessary here as there will only be one match.
        
3. **`*.txt`**:
    
    - This is the **file glob (wildcard)** that specifies which files the `rename` command should operate on.
        
    - **`*`**: This is a wildcard that matches **any sequence of zero or more characters**.
        
    - **`.txt`**: This ensures that only files ending with `.txt` are selected by the shell before being passed to the `rename` command.
        

**In summary, the command `rename 's/\.txt$/\.txts/' *.txt` will:**

1. **Find all files** in the current directory that end with the `.txt` extension (e.g., `file1.txt`, `document.txt`, `image.jpg.txt`).
    
2. For each of those files, it will **look for the literal string `.txt` at the very end of its name**.
    
3. If found, it will **replace that `.txt` with `.txts`**.
    

**Example:**

If you have the following files in your directory:

- `report.txt`
    
- `notes.txt`
    
- `backup.txt.old`
    
- `image.jpg`
    
- `my.document.txt`
    

After running `rename 's/\.txt$/\.txts/' *.txt`, the files would be renamed as follows:

- `report.txt` becomes `report.txts`
    
- `notes.txt` becomes `notes.txts`
    
- `backup.txt.old` **remains `backup.txt.old`** (because `.txt` is not at the _very end_ of the filename)
    
- `image.jpg` **remains `image.jpg`** (because it doesn't end with `.txt`)
    
- `my.document.txt` becomes `my.document.txts`
    

**Crucial Safety Tip:**

Before running any `rename` command with regular expressions on important files, it's highly recommended to use the **`-n` (no-act or dry run) option** to see what changes would be made without actually performing them:

Bash

```
rename -n 's/\.txt$/\.txts/' *.txt
```

This will output something like:

```
rename(report.txt, report.txts)
rename(notes.txt, notes.txts)
rename(my.document.txt, my.document.txts)
```

This allows you to verify that your regular expression is correctly targeting the files and patterns you intend before making irreversible changes.

![[Pasted image 20250718185324.png]]

## 7. Deleting a File

```
$ rm filename
```

## **8.** To edit a file

```
nano filename.extension
```

## pwd

==pwd== --> print working directory

**displays the directory (or folder) you're currently in**.
# 2. User management commands


