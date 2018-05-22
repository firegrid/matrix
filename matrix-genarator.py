# -*- coding: utf-8 -*-
"""
Created on Mon May 21 21:35:03 2018

@author: praveen
"""

array = [[1, 0, 0, 1 ],
         [1, 0, 0, 0],
         [0, 0, 0, 1],
         [0, 0, 0, 0]]

transpose = [ [a[i] for a in array] for i in range(4)]
result = []

for x in transpose:
    b = 1
    c = []
    for i  in x:
        c.append(i * b )
        b = b << 1
    result.append(sum(c))
