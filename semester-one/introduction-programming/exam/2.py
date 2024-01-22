resp = input("digite números : ")
resp = resp.split()
resp_int = []
total = 0
for a in resp:
    num = int(a)
    resp_int.append(num)

resp_int.sort()

print(resp_int)

for a in resp_int:
    total += a

print(f'soma total : {total}')
