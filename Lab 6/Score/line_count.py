import sys


def split(word):
    return [char for char in word]


# filename = input("Enter filename: ")
filename = sys.argv[1]
file = open(filename, "r")

line_count = 0

for line in file:
	length = 0
	for ch in split(line):
		if (ord(ch)>= 48 and ord(ch)<= 122):
			length = length + 1
			# break
	# print(length)
	if length >= 1:
		line_count += 1


file.close()
# print(f"Number of usefull lines: {line_count}")

print(line_count)