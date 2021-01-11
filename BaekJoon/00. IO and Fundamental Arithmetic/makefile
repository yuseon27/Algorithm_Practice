CC     = g++
CFLAG  = -o
SRC    = test.cpp
OBJS   = test.o
TARGET = test.out

$(TARGET) : $(OBJS)
	$(CC) $(CFLAG) $@ $(OBJS)


# $(OBJS) : $(SRC)
test.o : test.cpp

clean :
	rm -f *.o
	rm -f $(TARGET)
