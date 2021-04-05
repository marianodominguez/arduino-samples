all: myBlink lcdHello
PORT=/dev/ttyACM0
BOARD=arduino:avr:uno

myBlink: 
	arduino-cli compile -b $(BOARD) myBlink
	arduino-cli upload -b $(BOARD) myBlink
lcdHello: 
	arduino-cli compile -b $(BOARD) lcdHello
	arduino-cli upload -b $(BOARD) -p $(PORT) lcdHello
