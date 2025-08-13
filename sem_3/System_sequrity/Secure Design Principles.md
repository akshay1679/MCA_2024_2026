 originally defined by <mark style="background: #FF5582A6;">Saltzer and Schroeder</mark> in 1975, are timeless rules for designing secure computing systems.


Secure Design Principles are a set of **best practices** used to design secure systems that protect data and resources from unauthorized access, misuse, or failures. These principles guide developers, architects, and engineers to build **secure-by-design** systems.

---

### 1. **Least Privilege**

**Give users and systems the minimum level of access required to perform their tasks.**

✅ _Example:_ A guest user on a website can only view content, not edit or delete it.

---

### 2. **Defense in Depth**

**Use multiple layers of security so that if one fails, others still protect the system.**

✅ _Example:_ A web app uses a firewall, HTTPS, user authentication, and input validation together.

---

### 3. **Fail Securely**

**When a system fails, it should do so in a secure way.**

✅ _Example:_ If a login system crashes, it should block access — not automatically let users in.

---

### 4. **Secure by Default**

**Default configurations should be secure, requiring users to enable risky features manually.**

✅ _Example:_ New user accounts start with the least permissions and no public data sharing.

---

### 5. **Keep It Simple (KISS - Keep It Simple and Secure)**

**Simple designs are easier to understand and secure. Complexity leads to hidden vulnerabilities.**

✅ _Example:_ A simple password reset flow is safer than one with too many conditions and redirects.

---

### 6. **Separation of Duties**

**Divide tasks and privileges among different people or systems to reduce risk of misuse.**

✅ _Example:_ In a bank, one person initiates a fund transfer and another approves it.

---

### 7. **Avoid Security by Obscurity**

**Don’t rely on secrecy of design or code for security — the system should be secure even if everything is known except the password/keys.**

✅ _Example:_ Relying on a hidden URL for a secret page is weak — use authentication instead.

---

### 8. **Economy of Mechanism**

**Use small, simple, well-understood components.**

✅ _Example:_ A basic, trusted encryption library is safer than a large, custom-built one.

---

### 9. **Complete Mediation**

**Check every access to every resource every time.**

✅ _Example:_ A user’s permission to read a file is checked every time they try — not just at login.

---

### 10. **Open Design**

**Security should not depend on keeping the design secret — only the keys/passwords should be secret.**

✅ _Example:_ The SSL/TLS protocol is public, but it's still secure because only the encryption keys are secret.

---

### 11. **Minimize Attack Surface**

**Reduce the number of entry points and exposed features to attackers.**

✅ _Example:_ Disabling unused ports or APIs on a server reduces the number of ways it can be attacked.

---

### 12. **Least Common Mechanism**

**Avoid sharing mechanisms (like functions, services, resources) between users or components.**

✅ _Example:_ Users having separate home directories rather than sharing one common folder.

---

### 13. **Psychological Acceptability**

**Security measures should not make the system harder to use.**

✅ _Example:_ Allowing biometric login (face ID) is secure and user-friendly, so users are more likely to adopt it.

---

\