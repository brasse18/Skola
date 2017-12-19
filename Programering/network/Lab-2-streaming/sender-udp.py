#client

import socket
import sys
from time import sleep

# Create a UDP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

ip = '193.11.186.174'
port = 10000
time = 0.05

server_address = (ip, port)
dump = bytearray(1000)
data = [b'1001;', b'1002;', b'1003;', b'1004;', b'1005;', b'1006;', b'1007;']

try:

    for x in range(0, 5):
        print('sending {!r}'.format(data[x]+b'and dump data'))
        sent = sock.sendto(data[x]+dump, server_address)
        sleep(time)


    # Receive response
    #print('waiting to receive')
    #data, server = sock.recvfrom(4096)
    #print('received {!r}'.format(data))

finally:
    print('closing socket')
    sock.close()
