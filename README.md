# Advanced Encryption Standard Project.

<a href="https://en.wikipedia.org/wiki/Advanced_Encryption_Standard">
<img alt="Wikipedia Page" src="https://upload.wikimedia.org/wikipedia/en/thumb/8/80/Wikipedia-logo-v2.svg/1200px-Wikipedia-logo-v2.svg.png" width="80"/>
</a>


## This is a C++ Console-Based encryption / decryption tool.

### Description

AES is a a widely-used algorithm for encryption that utilizes an 128-bit key and goes through 10 rounds of encryption. The input message, which we want to encrypt is divided into 16 byte (128 bit) chunks. Each round the message is XOR-ed with the key, passed into a constant substitution matrix, called an S-Box, shifted by rows and, finally, mixed by columns.
AES provides a secure and virtually unbreakable encryption.
The decryption process reverses the steps we take in the encryption part.


### Instructions

- Fork / Download the [AES_Project.cpp](AES_Project.cpp) file
- Ensure that the needed files (**"message.txt"**, **"encrypted_message.txt"** and **"key.txt"**) are in the same directory as the .cpp file
- Enter a key in "key.txt". Key needs to be at least 16 characters long.
- Enter a message in "message.txt".
- Enter an encrypted message in "encrypted_message.txt".
- Run the program and choose Encryption or Decryption mode by entering either 1 or 2


## Disclaimer

Program is configured to store the encrypted message and read the message to decrypt from the same file for convenience. 

**Encryption reads from _"message.txt"_ and outputs to _"encrypted_message.txt"_.**  
**Decryption reads from _"encrypted_message.txt"_ and outputs to _"decrypted_message.txt"_.**  
---

#### Additional Materials used: 
* [Wikipedia](https://en.wikipedia.org/wiki/Advanced_Encryption_Standard)
* [Cybernews](https://cybernews.com/resources/what-is-aes-encryption/)
* [Simplelearn Cryptography Tutorial](https://www.simplilearn.com/tutorials/cryptography-tutorial/aes-encryption)
* [Computerphile on Youtube](https://www.youtube.com/watch?v=O4xNJsjtN6E)
* [C Math Library: AES](https://www.youtube.com/watch?v=BKAaT8_Ql20)
* [Online AES encryption tool](http://aes.online-domain-tools.com/)
