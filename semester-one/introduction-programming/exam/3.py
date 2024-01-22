from math import sqrt

def calcula_bhaskara(a, b, c):
    delta = (b**2) - (4*a*c)
    resp1 = (-b + sqrt(delta)) / (2*a)
    resp2 = (-b - sqrt(delta)) / (2*a)
    return resp1, resp2

print("bhaskara")
x = calcula_bhaskara(1, 4, 1)
print(f' x1 = {x[0]}')
print(f' x2 = {x[1]}')