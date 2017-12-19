#server

import socket
import sys

# Create a UDP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Bind the socket to the port

ip = '193.11.186.174'
port = 10000
server_address = (ip, port)
print('starting up on {} port {}'.format(*server_address))
sock.bind(server_address)
stdata = []

while True:
    print('\nwaiting to receive message')
    data, address = sock.recvfrom(4096)

    print('received {} bytes from {}'.format(len(data), address))
    temp = data.decode("utf-8").split(";")
    print(temp[0])

    if len(stdata) > 0:
        if temp[0] < stdata[len(stdata)-1]:
            print('fel ordning motaget:{} senast motagen:{}'.format(temp[0], stdata[len(stdata) - 1]))
        elif int(temp[0]) != int(stdata[len(stdata) - 1]) + 1:
            print('fel paket saknas eller kommit i fel ordning motaget:{} senast motagen:{}'.format(temp[0], stdata[len(stdata)-1]))
    stdata.append(temp[0])