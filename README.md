# Simple Shell Project
![Holberton logo](https://www.holbertonschool.com/holberton-logo.png)
> Create a simple UNIX command interpreter in C programming language

## Description:bulb:

The objective of this project is to create from scratch a simple UNIX command interpreter with limited functionality but applying the core concepts of a more robust shell. In simple words, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. It incorporates many features and generally executes other commands.

* How does a shell work.
* What is a PID and a ppid, and how to use them.
* How to manipulate the environment of the current process.
* What is the difference between a function and a system call.
* How to create processes.
* How does the shell use the ```PATH``` to find the programs.
* How to execute another program with the ```execve``` system call.
* How to suspend the execution of a process until one of its children terminates.

## Technologies & Tools:computer:

![Ubuntu](https://img.shields.io/badge/-Ubuntu-E95420?&style=flat-square&logo=Ubuntu&labelColor=282828)
![Git](https://img.shields.io/badge/-Git-F05032?logo=git&style=flat-square&labelColor=282828)
![GNU_Bash](https://img.shields.io/badge/-GNU_Bash-4EAA25?logo=GNU-Bash&style=flat-square&labelColor=282828)
![emacs](https://img.shields.io/badge/-emacs-green)
![Vagrant](https://img.shields.io/badge/-Vagrant-1563FF?logo=Vagrant&style=flat-square&logoColor=1563FF&labelColor=282828)
![C](https://img.shields.io/badge/-C-A8B9CC?logo=C&style=flat-square&labelColor=282828)
![GNU_Emacs](https://img.shields.io/badge/-GNU_Emacs-7F5AB6?logo=GNU-Emacs&style=flat-square&labelColor=282828)
![GitHub](https://img.shields.io/badge/-GitHub-181717?logo=GitHub&style=flat-square&labelColor=282828)

---

## Requirements:exclamation:
Installed gcc (GNU Compiler Collection) version 4.8.4 or newer.

---

## Example:hammer_and_wrench:
### Clone repo using HTTPS
```
$ git clone https://github.com/lemejiamo/simple_shell.git
```

### Compilation
You can compile the files using this command to check that there are no errors:
```
$ gcc -Wall -pedantic -Werror Wextra *.c -o hsh
```

### Usage
Enter the interactive mode after compilation:
```bash
$ ./hsh
 simple@shell $ /bin/ls
 README.md strfunction.c holberton.h main.c comexterno.c
 simple@shell $
 simple@shell $ exit
$
```
---

## Contribution:heavy_check_mark:
Create a new branch with the name of your feature or fix and make a pull request to develop branch explaining your work.

---

## Authors
* **Alexander Forero** - [Github](https://github.com/ForeroAlexander)
* **Daniel Escobar** - [Github](https://github.com/dantereto)
* **Luis Mejia** - [Github](https://github.com/lemejiamo)