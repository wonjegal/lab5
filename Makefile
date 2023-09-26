debug = 1

CC = g++
CFLAGS = -O2
TARGET = main.out
OBJS = main.o stringop.o


$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o main.out
