#!/usr/bin/python3
from itertools import cycle

def repeated_xor(xor_fake, key_fake):
	result = ""
	for c, k in zip(xor_fake, cycle(key_fake)):
		result += chr(ord(c) ^ ord(k))
	return result

xor_fake = "OVxyXHJceDEyMTE/Plx4MDNceDFmXHgwMTFceDAxIVx4MDRceDAz" #base64
key_fake = 'Konci'
repeated_xor(xor_fake,key_fake)
