SRCS = hello.c
HDRS =
PROJ = example


CC = gcc
OBJS = $(SRCS:.cpp=.o)
APP = $(PROJ)
CFLAGS = -c -g -Wall -I/opt/local/include
LDFLAGS = -L/opt/local/lib
LIBS = -lcppunit -ldl

all: $(APP)

$(APP): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $(APP) $(LIBS)

%.o: %.cpp $(HDRS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o $(APP)
