Here’s a list of **common web application attacks**, along with **how they occur**, their **consequences**, and **prevention methods**:

---

### 1. **SQL Injection (SQLi)**

**How it occurs:**  
The attacker inputs ==malicious SQL queries into a form field== (like login or search), which the server executes if user input is not sanitized.  
**Consequence:**

- Unauthorized access to data
    
- Data theft or deletion
    
- Full database compromise
    

**Prevention:**

- Use prepared statements (parameterized queries)
    
- Use ORM frameworks (like Django ORM, SQLAlchemy)
    
- Validate and sanitize user inputs
    
- Apply least privilege to database accounts
    

---

### 2. **Cross-Site Scripting (XSS)**

**How it occurs:**  
Malicious JavaScript is injected into a website through input fields or URLs, which is then executed in other users’ browsers.  
**Consequence:**

- Theft of session cookies
    
- Redirection to malicious sites
    
- Defacement or phishing
    

**Prevention:**

- Encode output (especially in HTML, JS, URLs)
    
- Use Content Security Policy (CSP)
    
- Validate and sanitize user input
    
- Avoid using `innerHTML` to render user data
    

---

### 3. **Cross-Site Request Forgery (CSRF)**

**How it occurs:**  
User is tricked into making a request (e.g., form submission) while logged in, causing unwanted actions (like transferring money).  
**Consequence:**

- Unauthorized actions on behalf of the user
    
- Account manipulation
    

**Prevention:**

- Use CSRF tokens
    
- Check `Referer` header
    
- SameSite cookie attribute (`SameSite=Strict`)
    
- Require re-authentication for critical actions
    

---


### 4. **Directory Traversal (Path Traversal)**

**How it occurs:**  
Attackers manipulate file paths (e.g., `../../etc/passwd`) to access files outside the intended directory.  
**Consequence:**

- Unauthorized access to sensitive files
    
- Data leakage
    

**Prevention:**

- Validate and sanitize file paths
    
- Use secure APIs for file access
    
- Restrict file access to specific directories
    

---
