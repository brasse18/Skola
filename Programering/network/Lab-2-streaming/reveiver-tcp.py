#receiver-udp

import socket
import sys

# Create a UDP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind the socket to the port

TCP_IP = '127.0.0.1'
TCP_PORT = 10000
BUFFER_SIZE = 20  # Normally 1024, but we want fast response

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((TCP_IP, TCP_PORT))
s.listen(1)

stdata = []

conn, addr = s.accept()
print('Connection address:', addr)
while True:
    data = conn.recv(BUFFER_SIZE)
    if not data: break
    temp = data.decode("utf-8").split(";")
    print("received data:", data)
    if len(stdata) > 0:
        if temp[0] < stdata[len(stdata)-1]:
            print('fel ordning motaget:{} senast motagen:{}'.format(temp[0], stdata[len(stdata) - 1]))
        elif int(temp[0]) != int(stdata[len(stdata) - 1]) + 1:
            print('fel paket saknas eller kommit i fel ordning motaget:{} senast motagen:{}'.format(temp[0], stdata[len(stdata)-1]))
    stdata.append(temp[0])
    stdata.sort()
conn.close()



