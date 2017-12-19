#client

import socket
import sys
from time import sleep
#sleep(0.1) # Time in seconds.

# Create a UDP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

server_address = ('81.92.197.134', 10000)
#dump = b'aofjdnlksujflkoichneldjshdkflskhflslfhsljfkursrklhsbdddddlllleeeiiiissshhhhdddggaaapppllmmqq'
dump = bytearray(1000)
data = [b'1001;', b'1002;', b'1003;', b'1004;', b'1005;', b'1006;', b'1007;']

try:

    for x in range(0, 5):
        print('sending {!r}'.format(data[x]+b'and dump data'))
        sent = sock.sendto(data[x]+dump, server_address)
        sleep(1)


    # Receive response
    #print('waiting to receive')
    #data, server = sock.recvfrom(4096)
    #print('received {!r}'.format(data))

finally:
    print('closing socket')
    sock.close()
