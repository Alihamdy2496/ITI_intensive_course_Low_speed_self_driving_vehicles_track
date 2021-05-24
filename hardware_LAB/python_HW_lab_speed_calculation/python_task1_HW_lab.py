#!/usr/bin/env python3

import numpy as np
import csv

with open("python_test_file.txt",'r', newline='') as given, open("out.txt",'w', newline='') as out :
    given = csv.reader(given, delimiter=',')
    for row in given:
        out.writelines(",".join(row))
        out.writelines('\n')
        if(row[16][-1]!=' ' or row[17][-1]!=' ' or  row[18][-1]!=' '):
            out.writelines("speed = ")
            out.writelines(str( float(row[16]) **2 + float(row[17]) **2 + float(row[18]) **2  ))
            out.writelines("\n")



