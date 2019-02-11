What are make, Makefiles?
is a file containing a set of directives used by a make build automation (build
automation tool that automatically builds executable programs and libraries from
source code by reading files called Makefiles which specify how to derive the
target program.) tool to generate a target/goal.

When, why and how to use Makefiles?
When: Make can be used to manage any project where some files must be updated
automatically from others whenever the others change.
Why: these files tell make what to do. Most often, the makefile tells make how
to compile and link a program.
How: Make starts with the first target.

0. make -f 0-Makefile
1. make -f 1-Makefile
2. make -f 2-Makefile
3. make -f 3-Makefile
4. A complete Makefile
5. Island Perimeter
6. make -f 100-Makefile
