#!/usr/bin/python3
import random
from matplotlib import pyplot as plt
from matplotlib.animation import FuncAnimation

data = []
y1 = []
y2 = []
x1 = []
x2 = []
dmin = 0
dmax = 100
N = 100

for i in range(N):
    data.append(random.randint(dmin, dmax))

mini = data[0]
maxi = data[0]

for i in range(len(data)):
    if (data[i] < mini):
        mini = data[i]
    if (data[i] > maxi):
        maxi = data[i]

countLen = maxi - mini + 1
count = []

for i in range(countLen):
    count.append(0)


for i in range(len(data)):
    count[data[i] - mini] += 1

y1 = count.copy()

for i in range(len(y1)):
    x1.append(i)

index = 0
i = 0
while (index < len(data)):
    if (count[i] != 0):
        data[index] = i
        y2.append(data.copy())
        index += 1
        count[i] -= 1
    else:
        i += 1

for i in range(len(y2)):
    x2.append(i)

fig, ax = plt.subplots(1, 2, squeeze=False)

def update(f):
    fig.suptitle('frame{}/{}'.format(f, len(y2)))
    ax[0, 0].cla()
    ax[0, 0].bar(x1[:], y1[:])

    ax[0, 1].cla()
    ax[0, 1].bar(x2[:], y2[f][:])

anim = FuncAnimation(fig, update, frames=len(y2), interval=1)
plt.show()
