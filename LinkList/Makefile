.PHONY : clean, run , test

CC  = gcc
CFLAGS = -Wall -g -O2
TARGET = LinkList
SOURCES = main.c LinkList.c 
OBJECTS = main.o LinkList.o


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
