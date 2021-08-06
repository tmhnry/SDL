#	headers
HEADERS = Screen.h

#	objects
OBJS = main.o Screen.o

#	extension
EXT = .cpp

#	separate macro to map includes to headers
_INC = $(HEADERS)
IDIR = ../includes

#	include list (list-include)
LINC = $(patsubst %,$(IDIR)/%,$(_INC))
LIBS = -lm -lSDL2

_OBJS = $(OBJS)
ODIR = obj
LOBJ = $(patsubst %,$(ODIR)/%,$(_OBJS))

#	using gcc will throw errors
CC = g++
CFLAGS = -I$(IDIR)

#	$@ and -o separated during make execution throws an error
# $(ODIR)/%.o: %$(EXT) $(LINC)
# 	$(CC) -o -c $@ $< $(CFLAGS)

$(ODIR)/%.o: %$(EXT) $(LINC)
	$(CC) -o $@ -c $< $(CFLAGS) $(LIBS)

main: $(LOBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
	rm -f $^ $(LOBJ) main
