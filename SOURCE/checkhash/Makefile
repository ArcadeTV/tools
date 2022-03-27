CFLAGS := -std=c99 -O2 -s -fno-ident -flto -Wall -Wextra -pedantic

all: checkhash.exe

checkhash.exe: checkhash.c sha256.c
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $^ -o $@ $(LIBS)
