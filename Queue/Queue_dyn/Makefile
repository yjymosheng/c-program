.PHONY : clean, run , test

CC  = gcc
CFLAGS = -Wall -g -O2
TARGET = Queue_dynamic
SOURCES = main.c Queue_dynamic.c 
OBJECTS = main.o Queue_dynamic.o


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
