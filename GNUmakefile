
# Filename: GNUmakefile
# Author: WINFUL Samuel A. <samuel@winful.com>
#
# References:
#   * Quick Slides: http://martinvseticka.eu/temp/make/presentation.html#19
#
#
# Notes:
# All targets (.o files are dependant on *.c files being present. If there exist a .c file, compile it
# and produce the corresponding .o used to create the target executable.
#
# target ... : prerequisites ...
#    perform-action
#
# Table:
#   $@ - Short hand for target (program) name.
#   $^ - Names of all the prerequisites w/ spaces between them.
#   $< - The name of the first prerequisite.
#   $? - The names of all the prerequisites newer than the target.
#
# %.o : %.c

CC = cc
EXECS = chap11_system1 chap11_execlp

all : $(EXECS)

chap11_execlp : chap11_execlp.o
	@echo '===>>> Compiling...'
	$(CC) -o $@ $?

chap11_system1 : chap11_system1.o
	@echo '===>>> Compiling...'
	$(CC) -o $@ $?

# Disable the linker (-c) and just generate object(.o) files from their sources.
%.o : %.c
	@echo '===>>> Generating objects ...'
	$(CC) -c $?

clean:
	@rm *.o chap11_system1
