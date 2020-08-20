input_str = input()
input_str = input_str.replace(' ', '').lower()

list_count = list()
alphabet = list('abcdefghijklmnopqrstuvwxyz')
for i in range(26):
    list_count.append(0)

for i in input_str:
    index = alphabet.index(i)
    list_count[index] += 1

for i in range(26):
    print(alphabet[i], ":", list_count[i])