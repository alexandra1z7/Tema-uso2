import random


x = random.randint(1,6)
y = random.randint(1,6)

mesaj = f"Dau cu zaru {x} {y}"

if x==6 and y==5:
	mesaj += " n-am nevoie de servici"
elif x==6 and y==6:
	mesaj += " ca mine nu se mai naste"

print(mesaj)
