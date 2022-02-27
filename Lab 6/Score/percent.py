import sys


def split(word):
    return [char for char in word]


# filename = input("Enter filename: ")
filename = sys.argv[1]
file = open(filename, "r")

line_count = 0
total_line = 0
total_com = 0

for line in file:
	line_count = line_count + 1
	stat = line_count%3
	if stat == 2:
		total_line = total_line + int(line)
	if stat == 0:
		total_com = total_com + int(line)

print(f"total lines: {total_line}")
print(f"total comments: {total_com}")

p = total_com * 100
p = p /total_line

print(f"percentage of comments: {p}")


file.close()
# print(f"Number of usefull lines: {line_count}")