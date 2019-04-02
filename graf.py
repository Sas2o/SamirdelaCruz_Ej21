#!/usr/bin/env python
# coding: utf-8
import numpy as np
import matplotlib.pyplot as plt
import os
os.system("./a.out > datos.txt")
datos = np.loadtxt("datos.txt")
plt.figure()
plt.plot(datos[:,0],datos[:,1])
plt.savefig("caminata_aleatorea")