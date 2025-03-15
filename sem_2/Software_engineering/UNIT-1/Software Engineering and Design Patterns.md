
## Software def

Software is defined as a collection of ==programs==, ==procedures==, ==documentation== and ==operating== . 
**P.P.D.O** 
 A Software consists of data and the related documents.
 The Institute of Electrical and Electronic Engineers (IEEE) defines software as a ‘collection of computer programs, procedures, rules and associated documentation and data

 ==Software Engineering== is a <mark style="background: #FFB8EBA6;">systematic, disciplined, quantifiable study and approach to the design, development, operation, and maintenance of a software system.</mark>
 
 Software engineering is a **systematic**  and **disciplined** approach towards the development of the software operation +and maintenance.

S D
## Why is Software Engineering required? 

1.  manage Large software 
2.  Scalability 
3.  Cost Manage                                                          MSCDQ
4.  manage <mark style="background: #FFB8EBA6;">dynamic nature</mark> of software 
5.  better quality


 Objectives of Software Engineering: 
6. **Maintainability** – It should be feasible for the software to evolve to meet changing requirements. 
7. **Efficiency** – The software should not make wasteful use of computing devices such as memory, processor cycles, etc. 
8. **Correctness** – A software product is correct if the different requirements as specified in the SRS document have been ==correctly implemented==. 
9. **Reusability** – A software product has good reusability if the different modules of the product can easily be reused to develop new products.0
10. **Testability** – Here software facilitates both the ==establishment== of test criteria and the evaluation of the software with respect to those criteria. 
11. **Reliability** – It is an attribute of software quality. <mark style="background: #FF5582A6;">The extent to which a program can be expected to perform its desired function,</mark> over an arbitrary time period. 
12. **Portability** – In this case, the software can be transferred from one computer system or environment to another. <mark style="background: #FFB8EBA6;">env change</mark>
13. **Adaptability** – In this case, the software allows differing system constraints and the user needs to be satisfied by making changes to the software.  <mark style="background: #FFB8EBA6;">new env adaptable</mark>
14. **Interoperability** – Capability of 2 or more functional units to process data cooperatively.

==M E C R T R P A I==

##  Program vs Software Product:

| Feature                    | **Program**                                                      | **Software Product**                                                                  |
| -------------------------- | ---------------------------------------------------------------- | ------------------------------------------------------------------------------------- |
| **Definition**             | ==A set of instructions written to perform a specific task==.    | ==A fully developed, tested, and packaged software solution designed for end-users.== |
| **Purpose**                | ==Solves a particular problem== or performs a specific function. | Meets broader user requirements with additional features, usability, and support.     |
| **Development Complexity** | Simple, often developed for personal or academic use.            | Complex, requires software engineering principles, testing, and maintenance.          |
| **Testing**                | ==Basic testing== for functionality.                             | ==Rigorously tested== for performance, security, and user experience.                 |
| **User Interface (UI)**    | May not have a user-friendly interface.                          | Designed with user experience in mind, often with a GUI.                              |
| **Maintenance**            | ==Minimal== or no updates after creation.                        | ==Regular== updates, bug fixes, and improvements.                                     |
| **Scalability**            | ==Limited== to its initial purpose.                              | ==Scalable== to accommodate more users, data, and functionalities.                    |
| **Documentation**          | May have little or no documentation.                             | Properly documented with user guides and developer support.                           |
| **Deployment**             | ==Run in a development or testing environment==.                 | Deployed for public or enterprise use, often with installation or cloud-based access. |

Software=Program+documentation+licensing

A program is one of the stages involved in the development of the software, whereas a software development usually follows a life cycle, which involves the **feasibility** study of the project, **requirement** gathering, development of a **prototype**, **system design**, **coding**, and **testing**.


## Classification of Software

==On the basis of application: ==
### **1. System Software**

- Manages ==computer resources== and ==supports application execution==.
- ==Essential for a computer to function.==
- A computer cannot function without the presence of these.
- Includes:
    - ==**Operating Systems**== – Link program requirements with machine capabilities.
    - **Compilers** – Translate high-level code into machine language.
    - **Editors & Drivers** – Support software development and hardware communication.

### **2. Networking and Web Applications Software**

- ==Enables communication between computers== and data storage.
- provides the required support necessary for computers to interact with each other and with data storage facilities
- ==Supports network-based applications== (e.g., World Wide Web).
- Includes:
    - **Network Management Software** – Manages networks and connections.
    - ==**Server Software**== – Supports hosting and data access.
    - **Security & Encryption Software** – Ensures data protection.
    - ==**Web Development Tools**== – Languages like HTML, PHP, XML, etc.

### **3. Embedded Software**

- ==Built into hardware, usually in **Read-Only Memory (ROM)**.==
- Supports specific functionalities under controlled conditions.
- Used in devices like:
    - **==Washing Machines==**
    - **Satellites**
    - **==Microwaves==**
    - **Industrial control systems**

![[UNIT-1.webp]]


## Software Processes   <mark style="background: #FF5582A6;">not needed</mark>

  A software process is the set of ==activities== and ==associated outcome== that produce a software product. Software engineers mostly carry out these activities. These are four key process activities, which are common to all software processes. These activities are: 
 
 1.<mark style="background: #FFB86CA6;">**Software specifications**</mark>: The <mark style="background: #FFB8EBA6;">functionality</mark> of the software and <mark style="background: #FFB8EBA6;">constraints</mark> on its operation must be defined. 

chatgpt: 
Software specifications are a ==detailed plan== that<mark style="background: #FFB8EBA6;"> <u>describes what a software should do and how it should work</u></mark>. It includes the features, rules, and technical details needed to build the software correctly. Think of it like a blueprint for a house—it guides developers to create the right product as expected.
 
 2.**<mark style="background: #FFB86CA6;">Software development</mark>**: The <mark style="background: #FFB8EBA6;">software to meet the requirement</mark> must be produced. 
 
 3.<mark style="background: #FFB86CA6;">**Software validation**</mark>: The software must be validated to ensure that <mark style="background: #FFB8EBA6;">it does what the customer wants.</mark> 
 
 4.<mark style="background: #FFB86CA6;">**Software evolution**</mark>: The software <mark style="background: #FFB8EBA6;">must evolve to meet changing client needs</mark>.

==S.D.V.E==
## The Software Process Model

A **Software Process Model** is a <mark style="background: #FFB8EBA6;">structured approach to software development that defines the processes, activities, and tasks involved in building software</mark>. It provides a framework for planning, organizing, and managing software development projects.

Process models may contain activities, which are part of the software process, software product, and the roles of people involved in software engineering


1. **Waterfall Approach** – The development process happens step by step, like a staircase. First, you 
	1. gather <mark style="background: #ABF7F7A6;">requirements</mark>, 
	2. then <mark style="background: #ABF7F7A6;">design</mark> the system, 
	3. write the <mark style="background: #ABF7F7A6;">code</mark>, <mark style="background: #ABF7F7A6;">test</mark> it, 
	4. and finally <mark style="background: #ABF7F7A6;">deploy</mark> it. 
	Each step must be completed before moving to the next.
    
2. **Evolutionary Development** –<mark style="background: #FFB8EBA6;"> Instead of finishing everything in one go, the software is built and improved gradually</mark>. 
	1. A basic version is made quickly, 
	2. and then features are added and refined over time based on feedback.
    
3. **Formal Transformation** – The software is created using mathematical rules to ensure it is 100% correct. The specifications are written in a precise mathematical form, and then they are converted into a working program step by step.

individual sadanathine points idum ennitte ade add up akkum using maths angane progress check cheyyum

4. **System Assembly from Reusable Components** – Instead of building everything from scratch, existing software components are combined to create a new system, like assembling a puzzle using pre-made pieces.
## Software Crisis  ==imp==

1.**Size**: Software is becoming bigger and more complicated, making it harder and more expensive to develop. For example, the amount of code in consumer products is doubling every few years.

2.**Quality**: Many software products have bugs or errors due to poor testing. On average, software testing finds 25 errors in every 1,000 lines of code.

3.**Cost**: Software development is costly i.e. in terms of time taken to develop and the money involved. For ==example, Development of the FAA's Advanced Automation System cost over $700 per lines of code==. 

4.**Delayed Delivery**:Many software projects take longer than expected, leading to higher costs. In fact, one out of four large-scale projects is never completed. Serious schedule overruns are common. ==Very often the software takes longer than the estimated time to develop, which in turn leads to cost shooting up==. For example, one in four large-scale development projects is never completed.

==S.Q.C.DD==
## Software Engineering - Layered technology  ==imp==

 Software engineering is a fully layered technology. 
 To develop a software, we need to go from one layer to another. 
 All these layers are related to each other and each layer demands the fulfillment of the previous layer.

![[UNIT-1 1.webp]]



 The layered technology consists of: 

#### 1 Quality focus (<mark style="background: #FF5582A6;">M.I.U</mark>)

The characteristics of good quality software are: 
1. Correctness of the functions required to be performed by the software. 
2.  ==Maintainability== of the software 
3.  ==Integrity== i.e. providing security so that the unauthorized user cannot access information or data. <mark style="background: #FF5582A6;">prevent unauthorized user </mark>
4. ==Usability== i.e. the efforts required to use or operate the software.




####  2. Process /base layer or foundation layer

1. It is the base layer or foundation layer for the se. 
2. The software process is the key to keep all levels together.  
3. It defines a framework that includes different activities and tasks.  
4. In short, ==it covers all activities, actions and tasks required to be carried out for software development==.


####  3. Methods 

1. The method provides the answers of all '==how-to==' that are asked during the process. 
2. It provides the ==technical way to implement the software==. 
3. It includes collection of tasks starting from communication, requirement analysis, analysis and design modelling, program construction, testing and support.(==sdlc==)



#### 4. Tools 
1. The software engineering tool is an automated support for the software development.
2. The <mark style="background: #FFB8EBA6;">tools are integrated </mark>i.e the information created by one tool can be used by the other tool. 
 For example: The <mark style="background: #FFB8EBA6;">Microsoft publisher can be used as a web designing tool</mark>.

## Software Process Framework ==imp==

 The process of framework defines a small set of activities that are applicable to all types of projects.  The software process framework is a collection of task sets.  Task sets consist of a collection of small work tasks, project milestones, work productivity and software quality assurance points.

## Umbrella activities ==imp==

 Typical umbrella activities are: 
<mark style="background: #FFB8EBA6;">1. Software project tracking and control </mark>
	1.  In this activity, the developing team accesses project plan and compares it with the predefined schedule.  ==tracking==
	2.  If these project plans do not match with the predefined schedule, then the required actions are taken to maintain the schedule.  ==control==
<mark style="background: #FFB8EBA6;">2. Risk management </mark>
	3.  Risk is an event that may or may not occur. 
	4.  ==If the event occurs, then it causes some unwanted outcome.== Hence, ==proper risk management is required.==
	
<mark style="background: #FFB8EBA6;">3. Software Quality Assurance (SQA) </mark>
		1.  SQA is the planned and systematic pattern of activities which are required to give a guarantee of software quality. ==For example, during the software development meetings are conducted at every stage of development to find out the defects and suggest improvements== to produce good quality software.  similar to scrum meeting
<mark style="background: #FFB8EBA6;">4. Formal Technical Reviews (FTR) </mark>
		2.  FTR is a meeting conducted by the ==technical staff==. 
		3.  The motive of the meeting is to detect quality problems and suggest improvements. 
		4.  The ==technical person focuses on the quality== of the software from the customer point of view.  
5. <mark style="background: #FFB8EBA6;">Measurement</mark> 
	1.  Measurement consists of the effort required to measure the software. 
	2.  The software cannot be measured directly. It is measured by direct and indirect measures. 
	3.  **Direct measures** like ==cost, lines of code, size of software== etc. 
	4.  **Indirect measures** such as ==quality of software== which is measured by some other factor. Hence, it is an indirect measure of software.  
<mark style="background: #FFB8EBA6;">6. Software Configuration Management (SCM) </mark>
		1.  It manages the effect of change throughout the software process.
==2. ooro stages ile changes manage cheyyunnade==
<mark style="background: #FFB8EBA6;">7. Reusability management </mark>		2. ooro stages ile changes manage cheyyunnade
		2.  It defines the criteria for reuse the product. 
		3.  The quality of software is good when the components of the software are developed for certain application and are useful for developing other applications.  
<mark style="background: #FFB8EBA6;">8. Work product preparation and production </mark>
	5.  It consists of the activities that are needed to create the ==documents, forms, lists, logs and user manuals for developing a software.== 
	6.  A software process is a collection of various activities.


There are five generic process framework activities: 
1. Communication 
2. Planning 
3. Modeling 
4. Construction 
5. Deployment

---
1. Communication: 
	1. The software development starts with the ==communication between customer and developer==. 
2. Planning: 
	1. It consists of complete 
		1. estimation, 
		2. scheduling for project development and 
		3. tracking. 
3. Modeling: 
	1. -  Modeling consists of complete requirement analysis and the design of the project like algorithm, flowchart etc. -  The algorithm is the step-by-step solution of the problem and the flow chart shows a complete flow diagram of a program. -  
4. Construction:   
	1. Construction consists of code generation and the testing part. -  Coding part implements the design details using an appropriate programming language. -  Testing is to check whether the flow of coding is correct or not. -  Testing also check that the program provides desired output. -  
5. Deployment: 
	2. -  Deployment step consists of delivering the product to the customer and take feedback from them. -  If the customer wants some corrections or demands for the additional capabilities, then the change is required for improvement in the quality of the software.


## Software Development Life Cycle (SDLC) 

-  A software life cycle model (also termed process model) is a pictorial and diagrammatic representation of the software life cycle. 
-  A life cycle model represents all the methods required to make a software product transit through its life cycle stages. 
-  A life cycle model maps the various activities performed on a software product from its inception to retirement. Different life cycle models may plan the necessary development activities to phases in different ways. 
-  During any life cycle stage, more than one activity may also be carried out.

## Need of SDLC 
-  Without using an exact life cycle model, the development of a software product <mark style="background: #FFB8EBA6;">would not be in a systematic and disciplined manner</mark>. When a team is developing a software product, there must be a clear understanding among team representative about when and what to do. 
-  A software==life cycle model describes entry and exit criteria for each phase==. A phase can begin only if its stage-entry criteria have been fulfilled. So without a software life cycle model, the entry and exit criteria for a stage cannot be recognized. Without software life cycle models, it becomes tough for software project managers to monitor the progress of the project

![[Software-Development-Life-Cycle.png]]

### **Software Development Life Cycle (SDLC) Stages**

#### **1. Planning and Requirement Analysis**

- This is the most crucial stage in the SDLC.
- Senior team members perform requirement analysis with input from ==stakeholders== and domain experts.
- ==Quality assurance planning and risk identification are conducted.==
- Business analysts and project organizers hold meetings with clients to gather data about the product, its objectives, and the end users.

#### **2. Defining Requirements**

- ==After analyzing requirements==, the next step is to ==document them formally==.
- The Software Requirement Specification ==(SRS)== document is created, detailing all necessary product requirements.
- Stakeholders must approve the SRS before proceeding.

#### **3. Designing the Software**

- This phase involves converting ==requirements into a structured design.==
- The design is based on inputs from requirement gathering and customer feedback.
- Architectural==, high-level, and detailed designs are created== to guide development.

#### **4. Developing the Project**

- The actual coding process begins in this phase.
- Developers write code following coding guidelines and best practices.
- Programming tools such as compilers, interpreters, and debuggers are used for implementation.

#### **5. Testing**

- Once the code is generated, it undergoes various tests to ensure it meets the requirements.
- Testing phases include:
    - **Unit Testing** – Testing individual components.
    - **Integration Testing** – Ensuring different modules work together.
    - **System Testing** – Testing the complete system for compliance with requirements.
    - **Acceptance Testing** – Verifying the product with end users.

#### **6. Deployment**

- Once the software is certified as bug-free, it is deployed.
- The software may be released as is or with suggested enhancements.
- Deployment marks the beginning of user accessibility and feedback collection.

#### **7. Maintenance**

- After deployment, real-world issues may arise that require resolution.
- Maintenance includes bug fixes, updates, and feature enhancements.
- This phase ensures the software remains functional and efficient over time.

This structured approach ensures a smooth development process, resulting in high-quality software. 🚀