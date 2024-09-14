.PHONY : clean, run

CC  = gcc
CFLAGS = -Wall -g -O2
TARGET = hello
SOURCES = main.c calculate/calculate.c process/process.c struct/contain/contain.c struct/stack/stack.c
OBJECTS = main.o calculate/calculate.o process/process.o struct/contain/contain.o struct/stack/stack.o


run : $(TARGET)
	@./$(TARGET)

all : $(TARGET)
	@echo '编译完毕'
clean :
	@rm -f $(OBJECTS) $(TARGET)

$(TARGET) :$(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $@

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o$@