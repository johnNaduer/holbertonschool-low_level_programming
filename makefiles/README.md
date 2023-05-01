# C - Makefiles

## Introduction
Make is a build automation tool that is used to automatically build executable programs and libraries from source code by reading files called Makefiles. Makefiles contain rules that define how to derive the target (output) files from the source files.

## What are Makefiles?
Makefiles are files that specify how to derive the target files from the source files, including which files are the source files, which files are the intermediate files, and what commands to use to create the target files from the source and intermediate files.

## When, why and how to use Makefiles
Makefiles are used when you need to automate the build process for a project with multiple source files. By automating the build process, you can avoid having to manually compile all the source files each time you make a change, and can quickly rebuild only the files that have changed.

To use Makefiles, you need to create a Makefile in the root directory of your project, and define the rules for compiling the source files. You can then use the make command to automatically build the target files from the source files.

## Rules
Rules define how to create the target files from the source files, including which files are the source files, which files are the intermediate files, and what commands to use to create the target files from the source and intermediate files.

A rule consists of three parts: the target, the dependencies, and the commands. The target is the file that is being created, the dependencies are the files that the target depends on, and the commands are the shell commands that are used to create the target from the dependencies.

## Explicit and Implicit Rules
Explicit rules are rules that define exactly how to create the target file from the source file. In other words, they specify the exact commands that should be executed to create the target file.

Implicit rules, on the other hand, are rules that define a pattern for how to create the target file from the source file. They don't specify the exact commands that should be executed, but instead define a set of default commands that can be used to create the target file.

## Common / Useful Rules
Some of the most common and useful rules in Makefiles include:

- all: Builds all the targets in the Makefile.
clean: Deletes all the target files that were created by the Makefile.
- install: Installs the target files to their final destination.
- uninstall: Removes the installed target files from their final destination.

## Variables
Variables can be used in Makefiles to define values that are used in multiple rules or commands.

Variables are defined using the = or := operators, and can be used in commands by enclosing them in parentheses preceded by a dollar sign, like $(variable_name).

Variables can also be used to define flags or options that are passed to the compiler or linker during the build process.

## Example Makefile
```c
CC = gcc
CFLAGS = -Wall -Werror -g

all: program

program: main.o utils.o
	$(CC) $(CFLAGS) -o program main.o utils.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c
	$(CC) $(CFLAGS) -c utils.c

clean:
	rm -f program *.o
```
In this example, we define the compiler to be gcc, and we set some compilation flags to enable warnings, errors and debugging information.


