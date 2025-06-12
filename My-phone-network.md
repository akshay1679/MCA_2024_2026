The IP address **`127.0.0.1`** is known as the **IPv4 loopback address**. Here's a clear breakdown of its purpose and uses:

---

### **Key Facts About `127.0.0.1`**
1. **Loopback Function**  
   - It routes traffic **back to your own device** (localhost), bypassing physical network interfaces.  
   - Data sent to `127.0.0.1` **never leaves your computer**—it’s handled internally by the operating system.  

2. **Name Resolution**  
   - The hostname **`localhost`** typically resolves to `127.0.0.1` (you can test this by typing `ping localhost` in your terminal).  

3. **Scope**  
   - Part of the reserved IPv4 block **`127.0.0.0/8`** (all addresses from `127.0.0.0` to `127.255.255.255`).  
   - `127.0.0.1` is the most commonly used address in this range.  
It's used to create webserver and launch it on oru computer 
We could create SMTP server and send e-mails 


### private ip 
Is address which is not routable in global network or internet 

### public ip
Used in internet 


Router has 2 ip address public and private public is used to access internet and private is for lan

## ip address
2 parts network part and a host part
10.0.0.0/8--> network mask is 8
Which means first 8 bits are network part and 8-32=24 bits are host part

Network prefix <-- 10.0.0.0/8--> host part

## private ip address class

10.0.0.0 - 10.255.255.255.  -->10.0.0.0/8

1 ==Class A network==

172.16.0.0 172.31.255.255.   --> 172.16.0.0/16

16 ==Class B networks==

192.168.0.0 - 192.168.255.255.->192.168.1.0/24

256 ==Class C networks==

## public ip address

It is used to access internet 
Is give by organising called RIPE


RIPE NCC (Réseaux IP Européens Network Coordination Centre) is one of the five Regional Internet Registries (RIRs) responsible for allocating and managing IP address space (both IPv4 and IPv6) and AS numbers in Europe, the Middle East, and parts of Central Asia.

RIPE NCC does not operate with a single public IP address, like a regular website or server. Instead, it manages and allocates ranges of public IP addresses to ISPs, companies, and organizations in its service region.

## static and dynamic ip address 

