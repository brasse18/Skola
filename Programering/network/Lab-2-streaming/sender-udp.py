#sender-udp

import socket
import sys
from time import sleep

# Create a UDP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

ip = '81.92.197.134'
port = 10000
#time = 0

server_address = (ip, port)
dump = bytearray(1000)

try:

    for x in range(0, 50*30):
        nr = x + 1000
        mes = str(nr) + ';'
        data = mes.encode('ascii')
        print('sending {!r}'.format(data+b'and dump data'))
        sent = sock.sendto(data+dump, server_address)
        #sleep(time)

finally:
    print('closing socket')
    sock.close()
