import sys
import re

with open(sys.argv[1]) as file:
	for line in file:
		tmpLine = line

		tmpLine.replace(",", "")

		p = re.compile("[0-9][0-9]")

		if p.match(tmpLine):
			print(line)
			

