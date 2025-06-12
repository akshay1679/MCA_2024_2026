
- Mail server aliasing​ --> oru domin ile mail server specify cheyyum

- Centralized Architecture​
    
- Single point of failure​
    
- Has to cope with high traffic volume​
    
- Location : Where should it placed?​
    
- Huge database maintenance​
    
- Not scalable​

---

Client
  |
  v
Local DNS Server (recursive resolver)
  |
  v
Root DNS Server → TLD Server (.com) → Authoritative Server (example.com)
                                      |
                                      v
                          Returns IP of www.example.com

