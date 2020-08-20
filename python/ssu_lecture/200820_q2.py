#3과 5의 배수

# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
n = int(input())
n3 = n//3
n5 = n//5
n15 = n//15

sum3 = 3* n3* (n3+1) / 2
sum5 = 5* n5* (n5+1) / 2
sum15 = 15* n15* (n15+1) / 2

result = int(sum3 + sum5 - sum15)
print(result)