SRCS = hello.c 
HDRS =
PROJ = hello 


CC = g++
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

SRCS1 = test1.c
HDRS1 =
PROJ1 = test1 


CC = g++
OBJS1 = $(SRCS1:.cpp=.o)
APP1 = $(PROJ1)
CFLAGS = -c -g -Wall -I/opt/local/include
LDFLAGS = -L/opt/local/lib
LIBS = -lcppunit -ldl

all1: $(APP1)

$(APP1): $(OBJS1)
	$(CC) $(LDFLAGS) $(OBJS1) -o $(APP1) $(LIBS)

%.o: %.cpp $(HDRS1)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o $(APP1)
