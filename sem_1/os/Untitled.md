## ****Difference Between The Shared Memory Model and Message Passing Model in IPC****

|Shared Memory Model|Message Passing Model|
|---|---|
|The shared memory region is used for communication.|A message-passing facility is used for communication.|
|It is used for communication between processes on a single processor or multiprocessor system where the communicating processes reside on the same machine as the communicating processes share a common address space.|It is typically used in a distributed environment where communicating processes reside on remote machines connected through a network.|
|The code for reading and writing the data from the shared memory should be written explicitly by the Application programmer.|No such code is required here as the message-passing facility provides a mechanism for communication and synchronization of actions performed by the communicating processes.|
|It provides a maximum speed of computation as communication is done through shared memory so system calls are made only to establish the shared memory.|It is time-consuming as message passing is implemented through kernel intervention (system calls).|
|Here the processes need to ensure that they are not writing to the same location simultaneously.|It is useful for sharing small amounts of data as conflicts need not be resolved.|
|Faster communication strategy.|Relatively slower communication strategy.|
|No [kernel](https://www.geeksforgeeks.org/kernel-in-operating-system/) intervention.|It involves kernel intervention.|
|It can be used in exchanging larger amounts of data.|It can be used in exchanging small amounts of data.|
|Example- <br><br>- Data from a client process may need to be transferred to a server process for modification before being returned to the client.|Example- <br><br>- Web browsers<br>- Web Servers<br>- Chat program on WWW (World Wide Web)|