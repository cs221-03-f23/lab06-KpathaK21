PROG = lab06 
OBJS = base.o scan.o parse.o lab06.o

CFLAGS = -g

# Pattern rules to avoid explicit rules
%.o : %.c
	gcc $(CFLAGS) -c -o $@ $<

all : $(PROG)

$(PROG) : lab06.h $(OBJS)
	gcc $(CFLAGS) -o $@ $(OBJS)

clean :
	rm -rf $(PROG) $(OBJS)

