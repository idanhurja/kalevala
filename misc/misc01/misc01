#!/opt/pwn.college/python

import os

with open('/home/hacker/flag_compare', 'rb') as file:
    flag_compare_data = file.read()
    compare_length = len(flag_compare_data)
    file.close()

with open('/flag', 'rb') as file:
    flag_data = file.read(compare_length)
    file.close()
    os.remove('/flag')    

if flag_data == flag_compare_data:
    print("ok")
else:
    os.remove('/home/hacker/flag_compare')
