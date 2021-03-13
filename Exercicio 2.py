#2.	Crie um programa em Python para calcular o fatorial de um número dado pelo usuário.


from math import factorial
n = int(input('Digite um número para calcular seu Fatorial: '))
f = factorial(n)
print(' o fatorial de {} é {}.'.format(n, f))
