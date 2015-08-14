
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

SRCS = chap11_system1.c
OBJS = chap11_system1.o

chap11_system1 : $(OBJS)
	@echo '===>>> Compiling...'
	g++ -o $@ $?

# Disable the linker (-c) and just generate object(.o) files from their sources.
$(OBJS) : $(SRCS)
	@echo '===>>> Generating objects ...'
	g++ -c $^

clean:
	@rm *.o chap11_system1
