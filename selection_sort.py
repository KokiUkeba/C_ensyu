#!/usr/bin/python3
import random
from matplotlib import pyplot as plt
from matplotlib.animation import FuncAnimation

data = []
y = []
x = []
N = 100

for i in range(N):
    data.append(random.randint(0, 100))
    x.append(i)

y.append(data.copy())

for i in range(len(data)):
    mini = i

    for j in range(i + 1, len(data)):
        if (data[j] < data[mini]):
            mini = j

    if (mini != i):
        data[i], data[mini] = data[mini], data[i]
        y.append(data.copy())

fig, ax = plt.subplots(1, 1, squeeze=False)

def update(f):
    fig.suptitle('frame{}/{}'.format(f, len(y)))
    ax[0, 0].cla()
    ax[0, 0].bar(x[:], y[f][:])

anim = FuncAnimation(fig, update, frames=len(y), interval=1)
plt.show()
