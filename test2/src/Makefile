#	headers
HEADERS = TEST.h

#	objects
OBJS = main.o TEST.o

#	extension
EXT = .cpp

#	separate macro to map includes to headers
_INC = $(HEADERS)
IDIR = ../includes

#	include list (list-include)
LINC = $(patsubst %,$(IDIR)/%,$(_INC))
LIBS = -lm

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
	$(CC) -o $@ -c $< $(CFLAGS)

main: $(LOBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $^ $(LOBJ) main
