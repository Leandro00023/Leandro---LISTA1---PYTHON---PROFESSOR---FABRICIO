# 1. Crie um programa para simular um jogo de dados.
# Dois deles serão lançados simultaneamente.
# Ao executar o algoritmo, a primeira rodada
# será disparada. O programa deve continuar
# no loop e imprimir o valor dos dois dados até
# o usuário indicar que não quer mais continuar.
import random


stop = 1


while stop != 0:
    d1 = random.randint(1, 6)
    d2 = random.randint(1, 6)
    print(d1, d2)
    stop = int(input('Digite 0 PARA PARAR'))


