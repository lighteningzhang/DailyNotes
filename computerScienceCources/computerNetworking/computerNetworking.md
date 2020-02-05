# Computer networking

## Application

## 4 Layer Internet Model

Application, transport, network, link

### link: send packet

### Network: give datagram to link layer to send

Router has network layer and link layer

### Transport: TCP, UDP

Internet Protocol(IP)

video transmission?

### Application:http(get command ascii string)

web server application

reuse layer

![image-20200112201722614](C:\Users\user\AppData\Roaming\Typora\typora-user-images\image-20200112201722614.png)

![image-20200112201931211](C:\Users\user\AppData\Roaming\Typora\typora-user-images\image-20200112201931211.png)

Two extra things:

- IP is the "thin waist"

http-->TCP/UDP-->IP--> link layer:Ethernet,wifi,dsl,three G

- seven layer OSI Model

![image-20200112204831673](C:\Users\user\AppData\Roaming\Typora\typora-user-images\image-20200112204831673.png)  

![image-20200112204947938](C:\Users\user\AppData\Roaming\Typora\typora-user-images\image-20200112204947938.png) Why add headers?

![image-20200112205026382](C:\Users\user\AppData\Roaming\Typora\typora-user-images\image-20200112205026382.png) ipv4 why set like this?

![image-20200112205115780](C:\Users\user\AppData\Roaming\Typora\typora-user-images\image-20200112205115780.png) 较ipv4有什么改进？

为什么可以用4层代替7层？ 有什么关联

## IP Service 

| IPdata | hdr  | IP hdr |
| ------ | ---- | ------ |
|        |      |        |

|             |                                                |
| ----------- | ---------------------------------------------- |
| Datagram    | Individually routed packets hop by hop routing |
| Unreliable  | Packets might be dropped                       |
| Best effort | ??                                             |
|             |                                                |

## Why is the IP service so simple

- faster and lower cost to build and maintain
- end-to-end principal??
- Allows a variety of services to build on top
- Works over link layer

IP service:

1. Tries to prevent packets looping 
2. fragment packets if they are too long
3. Header checksum to reduce chances of delivering datagram to wrong destination
4. Allow for new versions of IP
5. Allows for new options to be added to header

![image-20200117121852566](C:\Users\user\AppData\Roaming\Typora\typora-user-images\image-20200117121852566.png)

"Time to live" field is used to prevent permanent looping, it's decremented by every router. If it reaches zero, the router should drop it.



