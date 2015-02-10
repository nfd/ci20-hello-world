AS=mipsel-unknown-elf-as -mips32
CC=mipsel-unknown-elf-gcc
LD=mipsel-unknown-elf-ld
OBJCOPY=mipsel-unknown-elf-objcopy
CFLAGS=-Os

OBJS=start.o main.o

hello.bin: hello.elf
	$(OBJCOPY) -O binary $< $@

hello.elf: $(OBJS)
	$(LD) -T linker.lds -o $@ $+

%.o: %.[Sc]
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o *.elf *.bin

