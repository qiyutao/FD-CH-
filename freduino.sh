#!/bin/sh
cd test
platformio init -b megaatmega2560
cd ..
python arduino_web_server.py
