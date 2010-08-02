# Makefile for 'cobra_payload' aka 'cobra'
# By multisn0w


all:
	@echo ' '
	@echo 'Choose your Processor below to compile.'
	@echo '  make s5l8900 (iPhone, iPod Touch, iPhone 3G)'
	@echo '  make s5l8720 (iPod touch 2G)'
	@echo '  make s5l8920 (iPhone 3GS)'
	@echo '  make s5l8922 (iPod Touch 3G)'
	@echo '  make s5l8930 (iPad, iPhone 4)'
	@echo ' '

s5l8900:
	@cd src;make s5l8900;cd ..;

s5l8920:
	@cd src;make s5l8920;cd ..;
	
s5l8720:
	@cd src;make s5l8720;cd ..;
	
s5l8922:
	@cd src;make s5l8922;cd ..;
	
s5l8930:
	@cd src;make s5l8930; cd ..;

package:
	tar cjf cobra_payload.tar.gz includes src build Makefile

clean:
	@cd build;rm cobra_payload.bin;rm cobra_payload.elf; cd ..;

