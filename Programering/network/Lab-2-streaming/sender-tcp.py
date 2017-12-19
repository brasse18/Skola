#sender-tcp

import socket
import sys
from time import sleep


TCP_IP = '127.0.0.1'
TCP_PORT = 10000
BUFFER_SIZE = 1024
time = 0.05

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((TCP_IP, TCP_PORT))

dump = bytearray(1000)

try:

    for x in range(0, 20*30):
        nr = x + 1000
        mes = str(nr) + ';'
        data = mes.encode('ascii')
        print('sending {!r}'.format(data+b'and dump data'))
        s.send(data)
        sleep(time)


finally:
    print('closing socket')
    s.close()