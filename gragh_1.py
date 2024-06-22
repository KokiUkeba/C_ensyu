#!/usr/bin/python3

import numpy as np
from matplotlib import pyplot as plt

fig, ax = plt.subplots()

x_data=np.arange(-2., 3., 0.01)
y = list(i**3-2*i**2-3*i+3 for i in x_data)

y_data=np.array(y, dtype="float64")

ax.plot(x_data,y_data)
ax.set_xlabel("x")
ax.set_ylabel("f(x)")
ax.grid(axis="y", which="major")
plt.show()
