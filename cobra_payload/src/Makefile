# Makefile for 'cobra_payload' aka 'cobra'
# By multisn0w


s5l8900:
	arm-elf-gcc entry.S main.c -I../includes -o ../build/cobra_payload.elf -nostdlib -mthumb-interwork -lc -lgcc -Ttext=0x09000000
	arm-elf-objcopy -O binary ../build/cobra_payload.elf ../build/cobra_payload.bin

s5l8920:
	arm-elf-gcc entry.S main.c -I../includes -o ../build/cobra_payload.elf -nostdlib -mthumb-interwork -lc -lgcc -Ttext=0x41000000
	arm-elf-objcopy -O binary ../build/cobra_payload.elf ../build/cobra_payload.bin

s5l8922:
	arm-elf-gcc entry.S main.c -I../includes -o ../build/cobra_payload.elf -nostdlib -mthumb-interwork -lc -lgcc -Ttext=0x41000000
	arm-elf-objcopy -O binary ../build/cobra_payload.elf ../build/cobra_payload.bin
	
s5l8720:
	arm-elf-gcc entry.S main.c -I../includes -o ../build/cobra_payload.elf -nostdlib -mthumb-interwork -lc -lgcc -Ttext=0x09000000
	arm-elf-objcopy -O binary ../build/cobra_payload.elf ../build/cobra_payload.bin

s5l8930:
	arm-elf-gcc entry.S main.c -I../includes -o ../build/cobra_payload.elf -nostdlib -mthumb-interwork -lc -lgcc -Ttext=0x41000000
	arm-elf-objcopy -O binary ../build/cobra_payload.elf ../build/cobra_payload.bin
