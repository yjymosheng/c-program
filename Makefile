.PHONY : clean, run

CC  = gcc
CFLAGS = -Wall -g -O2
TARGET = hello
SOURCES = main.c function/function.c
OBJECTS = main.o function/function.o



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