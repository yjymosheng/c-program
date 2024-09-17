.PHONY : clean, run , test

CC  = gcc
CFLAGS = -Wall -g -O2
TARGET = Stack_static
SOURCES = main.c Stack_static.c 
OBJECTS = main.o Stack_static.o


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

test: $(TARGET)
	valgrind  ./$(TARGET)
