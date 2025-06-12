*Open Systems Interconnection*

how different computer systems communicate over a network
dev by **International Organization for Standardization (ISO)**

![[Pasted image 20250604214525.png]]

## ****Layer 1: Physical Layer****

- actual physical connection between the devices.
- information in the form of ****bits.****
- responsible for transmitting individual bits from one node to the next.
- When receiving data, this layer will get the signal received and convert it into 0s and 1s and send them to the Data Link layer which will put the frame back together
-  Hub, Repeater, Modem, and Cables.

****Bit Synchronization:**** --> by providing a clock.
****Bit Rate Control:**** --> transmission rate
****Physical Topologies:**** --> bus topology, star topology, or mesh topology.
****Transmission Mode:**** --> Simplex, half-duplex and full duplex.

## ****Layer 2: Data Link Layer (DLL)****

- responsible for the node-to-node delivery of the message.
- main function of this layer is to make sure ==data transfer is error-free== from one node to another, over the physical layer.
- transmit it to the Host using its MAC address. 
- Packet in the Data Link layer is referred to as Frame. Switches and Bridges are common Data Link Layer devices.
-  ==Switches and Bridges== are common Data Link Layer devices.

The Data Link Layer is divided into two sublayers:

Logical Link Control (LLC)
Media Access Control (MAC)

The packet received from the Network layer is further divided into frames depending on the frame size of the ****NIC (****[****Network Interface Card)****](https://www.geeksforgeeks.org/nic-full-form/). DLL also encapsulates Sender and Receiver’s MAC address in the header.

The Receiver’s MAC address is obtained by placing an ARP ([Address Resolution](https://www.geeksforgeeks.org/how-address-resolution-protocol-arp-works) Protocol) request onto the wire asking, "Who has that IP address?" and the destination host will reply with its MAC address.

### Functions of the Data Link Layer

- ****Framing:**** Framing is a function of the data link layer. It provides a way for a sender to transmit a set of bits that are meaningful to the receiver. This can be accomplished by attaching special bit patterns to the beginning and end of the frame.
- ****Physical Addressing:**** After creating frames, the Data link layer adds physical addresses (MAC ****addresses)**** of the sender and/or receiver in the header of each frame.
- ****Error Control:**** The data link layer provides the mechanism of error control in which it detects and retransmits damaged or lost frames.
- ****Flow Control:**** The data rate must be constant on both sides else the data may get corrupted thus, flow control coordinates the amount of data that can be sent before receiving an acknowledgment.
- ****Access Control:**** When a single communication channel is shared by multiple devices, the MAC sub-layer of the data link layer helps to determine which device has control over the channel at a given time.

# Application Layer in OSI Model

| Protocol | Purpose                | Port       | Analogy                    |     |
| -------- | ---------------------- | ---------- | -------------------------- | --- |
| HTTP     | Web browsing           | 80/443     | Talking to a website       |     |
| FTP      | File transfer          | 20/21      | Remote file storage access |     |
| SMTP     | Sending emails         | 25/587/465 | Outgoing mail delivery     |     |
| DNS      | Domain name resolution | 53         | Internet phonebook         |     |
- DNS: DNS stands for Domain Name System
- TELNET: Telnet stands for Telecommunications Network.port number 23.

![[WhatsApp Image 2025-06-05 at 8.07.36 AM.jpeg]]

![[application-layer.gif]]

