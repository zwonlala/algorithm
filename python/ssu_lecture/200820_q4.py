#알파벳 빈도 구하기
#문제에서 입력의 대소문자 구분을 하지 않는 다는 조건을 확인하지 못해서 감점 받음
#alpha_list = list(string.ascii_lowercase)
# ->위 문장을 통해 알파벳 소문자로 이루어진 문자열, 리스트를 만드는 법을 알게 됨.


# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
import string

user_input = input()
alpha_cnt = {}
alpha_list = list(string.ascii_lowercase)

for i in range(len(alpha_list)):
    ch = alpha_list[i]
    alpha_cnt[ch] = 0

for i in range(len(user_input)):
    ch = user_input[i]
    # print(type(ch))
    # print(ch)

    if ch == ' ':
        continue
    if ch in alpha_cnt:
        alpha_cnt[ch] += 1

for alpha in alpha_list:
    # print(alpha)
    # print(alpha_cnt[str(alpha)])
    print(alpha, ':', alpha_cnt[alpha])