#문자열 뒤집기 문제

input_str = input()

reverse_list = list()

for i in range(len(input_str)-1, 0, -1):
    reverse_list.append(input_str[i])

print(''.join(reverse_list))
