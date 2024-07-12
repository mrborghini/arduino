# Basic Arduino setup Windows

1. Install [WinAVR](https://sourceforge.net/projects/winavr/)
2. Modify the makefile to match your Arduino. For example: Change the COM port number. Change the bootloader baudrate to either `115200` or `57600`. Change the atmega328p to something else if you have a different board. Just use Google to look up which board you have.
3. Make sure you have `make` installed on your system. You can install using [msys2](https://www.msys2.org/) You can confirm by running:

```
make --version
```
4. Plugin your Arduino and run `make`.