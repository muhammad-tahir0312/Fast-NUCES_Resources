#!/usr/bin/env python
# coding: utf-8

# In[ ]:


import socket as s

hname = s.gethostname()
ip = s.gethostbyname(hname)
print(f"Host name: {hname}")
print(f"IP : {ip}")


# In[ ]:


import socket as s

ip = s.gethostbyname("www.google.com")
print(f"IP : {ip}")


# In[ ]:


import socket as s

ip = s.gethostbyaddr("172.217.169.228")
print(f"IP : {ip}")


# In[ ]:


def myfun():
    name = "tcp"
    for port in [80,25]:
        print("port: %s = service name: %s" %(port,s.getservbyport(port, name)))
    print("port: %s = service name: %s" %(53,s.getservbyport(53,'udp')))


# In[ ]:


myfun()


# In[ ]:


import time as t

s = t.time()


# In[ ]:


import sockets = socket.socket()

print("Socket Created")

s.bind(('localhost', 9999))

s.listen(5)


print("waiting for connection")

while True:
    c, addr = s.accept()
    print ("Got connection from",addr)
    c.send(bytes("Thank you for connecting"))
    c.close()


# In[ ]:


import socket

s = socket.socket()

print("Server created")
s.bind(("localhost", 9999))
s.listen(3)
print("Waiting for connection")

conn = True
while conn:
    c, addr = s.accept()
   # print(c)
    print(addr)
    receivedMsg = c.recv(1024).decode()
    print("Client:", receivedMsg)
    if receivedMsg == "exit":
        conn = False
    msg = input("Enter your message: ")
    c.send(bytes(msg, 'UTF-8'))

c.close()
s.close()


# # Name: Muhammad Tahir
# ## K21-4503
# ## Lab 02

# In[ ]:


#LAB TASK 01
import socket as s
def myfunc():
    name = "tcp"
    msg = int(input("Enter your message: "))
    print("port: %s = service name: %s" %(msg,s.getservbyport(msg, name)))


# In[ ]:


myfunc()


# In[1]:


#LAB TASK 02

#client code
import socket

conn = True

# open the file2.txt in write mode
file = open('file.txt', 'a')

while conn:
    c = socket.socket()
    c.connect(("localhost", 9999))
    msg = input("Enter your message: ")   
    file.write("\nClient: " + msg)
    c.send(bytes(msg, "UTF-8"))
    receivedMsg = c.recv(1024).decode()
    if msg == "exit":
        conn = False
        break
    print("Server: ", receivedMsg)
    file.write("\nServer: " + receivedMsg)

c.close()
file.close()


# In[2]:


#LAB TASK 03

#client code
import socket

conn = True
file = open('file.txt', 'a')

while conn:
    c = socket.socket()
    c.connect(("localhost", 9999))
    msg = input("Enter your marks: ")
    file.write("\nClient: " + msg)
    c.send(bytes(msg, "UTF-8"))
    receivedMsg = c.recv(1024).decode()
    if msg == "exit":
        conn = False
        break
    print("Server: ", receivedMsg)
    file.write("\nServer: " + receivedMsg)

c.close()
file.close()


# In[ ]:





# In[ ]:




