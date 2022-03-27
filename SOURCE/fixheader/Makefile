CFLAGS := -std=c99 -O2 -s -fno-ident -flto -Wall -Wextra -pedantic

all: fixheader.exe

fixheader.exe: fixheader.c
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $^ -o $@ $(LIBS)