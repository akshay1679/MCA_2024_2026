Dynamic Host Configuration Protocol (DHCP) is a network management protocol that <mark style="background: #FFB8EBA6;">automatically assigns IP addresses and other network configuration parameters to devices on a network</mark>. It eliminates the need for manual IP address configuration, which can be time-consuming and prone to errors.  

![[DHCP-protocol.png]]

**What DHCP does:**

- **Assigns IP Addresses:** DHCP automatically assigns unique IP addresses to devices (computers, laptops, smartphones, etc.) when they connect to a network.  
    
- **Provides Other Configuration Information:** Besides the IP address, DHCP can also provide other essential network settings, such as:
    - **Subnet Mask:** Defines the network and host portions of the IP address.  
        
    - **Default Gateway:** The IP address of the router that the device uses to communicate with other networks.
    - **DNS Server Addresses:** The IP addresses of the Domain Name System servers used to translate domain names into IP addresses.
- **Manages IP Address Allocation:** DHCP servers keep track of which IP addresses have been assigned and which are still available, preventing IP address conflicts.  
    
- **Uses Leases:** DHCP assigns IP addresses for a specific period of time called a "lease." When the lease expires, the device must renew it with the DHCP server.  
    
## Why ?

**Why DHCP is important:**

- **Simplifies Network Management:** It automates the IP address assignment process, reducing the workload for network administrators.  
    
- **Reduces Errors:** Eliminates the possibility of manual configuration errors like duplicate IP addresses.  
    
- **Improves Efficiency:** Makes it easier to add new devices to the network and manage IP address changes.  
    
- **Supports Mobility:** Allows devices to seamlessly connect to different networks without requiring manual IP configuration changes.  
    

## DORA processDORA

**How DHCP works (simplified):**

When a device connects to a network, it goes through a four-step process called DORA:

1. **DHCP Discover:** The <mark style="background: #ABF7F7A6;">device broadcasts a request</mark> to find a DHCP server on the network.  
    
2. **DHCP Offer:** A DHCP <mark style="background: #ABF7F7A6;">server responds with an offer, including an available IP</mark> address and other configuration information.  
    
3. **DHCP Request:** The <mark style="background: #ABF7F7A6;">device accepts the offer and sends a request to the DHCP server to confirm</mark> the assignment.  
    
4. **DHCP Acknowledgment:** The DHCP server acknowledges the request and the device can now use the assigned IP address.  
    
![[what-is-dhcp.jpg]]

