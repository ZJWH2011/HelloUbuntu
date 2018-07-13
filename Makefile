CC=gcc

hellogit:hellogit.c
	$(CC) $< -o $@

#abc.o:hellogit.c
#	$(CC) -c $<

clean:
	rm -rf *.o
	rm -rf hellogit

