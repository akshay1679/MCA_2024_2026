NAT (Network Address Translation) is a method used in networking to map private IP addresses to a public IP address (and vice versa), allowing multiple devices on a local network to access the internet using a single public IP.


---

🔹 Why is NAT needed?

IPv4 addresses are limited.

Most devices use private IPs (like 192.168.x.x, 10.x.x.x, etc.) which cannot be routed on the internet.

NAT helps these devices communicate with external networks (internet) by using a shared public IP.



---

🔹 How NAT Works (Simple Steps):

1. Your device (e.g., 192.168.1.2) sends a request to a website.


2. The router with NAT replaces the source IP with its own public IP (e.g., 203.0.113.5) and keeps a record of the connection.


3. The server responds to the public IP.


4. NAT translates it back to your private IP and delivers it to your device.




---

🔹 Types of NAT:

Type	Description

Static NAT	Maps one private IP to one public IP. Fixed mapping.
Dynamic NAT	Maps private IPs to a pool of public IPs. Dynamic assignment.
PAT (Port Address Translation) / NAT Overload	Maps many private IPs to one public IP using different ports. Most common in home routers.



---

🔹 Example of PAT:

Private IP	Port	Public IP:Port

192.168.1.2	1234	203.0.113.5:5000
192.168.1.3	1235	203.0.113.5:5001



---

🔹 Advantages:

Conserves public IP addresses.

Adds a layer of security (hides internal network structure).

Allows multiple devices to access the internet with a single public IP.



---

Let me know if you’d like a diagram or animation to visualize this!

