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

CC = cc
EXECS = chap11_system1 chap11_pexec chap11_fork1

all : $(EXECS)

chap11_% : chap11_%.o
	@echo '===>>> Compiling...'
	$(CC) -o $@ $?
	@echo ''

# Disable the linker (-c) and just generate object(.o) files from their sources.
%.o : %.c
	@echo '===>>> Generating objects ...'
	$(CC) -c $?
	@echo ''

clean:
	@echo '===>>> Cleaning extraneous files...'
	@rm *.o chap11_system1 chap11_pexec chap11_fork

