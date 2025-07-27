# CAESAR CIPHER
The Caesar Cipher is one of the simplest and oldest methods of encrypting messages, named after Julius Caesar, who reportedly used it to protect his military communications. This technique involves shifting the letters of the alphabet by a fixed number of places. For example, with a shift of three, the letter 'A' becomes 'D', 'B' becomes 'E', and so on. Despite its simplicity, the Caesar Cipher formed the groundwork for modern cryptographic techniques. In this article, we'll explore how the Caesar Cipher works, its significance, and its impact on the development of cryptography with its advantages and disadvantages.
# CRYPTOGRAPHY ALGORITHM
## ENCRYPTING A MESSAGE
-To cipher a given text we need an integer value, known as a shift which indicates the number of positions each letter of the text has been moved down. 

-The encryption can be represented using modular arithmetic by first transforming the letters into numbers, according to the scheme, A = 0, B = 1,..., Z = 25. Encryption of a letter by a shift n can be described mathematically. 

-For example, if the shift is 3, then the letter A would be replaced by the letter D, B would become E, C would become F, and so on. The alphabet is wrapped around so that after Z, it starts back at A.
### EXAMPLE
Here is an example of how to use the Caesar cipher to encrypt the message "HELLO" with a shift of 3:

-Write down the plaintext message: HELLO WORLD

-Choose a shift value. In this case, we will use a shift of 3.

-Replace each letter in the plaintext message with the letter that is three positions to the right in the alphabet.

![Alt Text](https://cdn.educba.com/academy/wp-content/uploads/2024/03/Message-Hello-World.jpg)
## DECRYPTING A MESSAGE
To decrypt the message, you simply need to shift each letter back by the same number of positions. In this case, you would shift each letter in "KHOOR" back by 3 positions to get the original message, "HELLO".

# HOW TO USE?
## STEP 1 
Clone or download the repository.
## STEP 2 
Open your terminal and run the program.
## STEP 3
When prompted, type the message you want to encrypt.

Example: hello world
## STEP 4
Next, enter the shift value (key).
This number determines how many positions each letter will be shifted in the alphabet.

Example: 3
## STEP 5
The program will display the encrypted message using the Caesar Cipher algorithm.

Example Output: khoor zruog
## STEP 5
Immediately after encryption, the program will also show the decrypted message by reversing the shift.

Example Output: hello world

# VULNERABILITY
-It is not secure against modern decryption methods.

-Vulnerable to known plaintext attacks, where an attacker has access to both the encrypted and unencrypted versions of the same messages.

-The small number of possible keys means that an attacker can easily try all possible keys until the correct one is found, making it vulnerable to a brute force attack.

-It is not suitable for long text encryption as it would be easy to crack.

-It is not suitable for secure communication as it is easily broken.

-Does not provide confidentiality, integrity, and authenticity in a message. 

# CONCLUSION
The Caesar Cipher, with its straightforward approach of shifting letters, serves as an excellent introduction to the world of cryptography. While it is easy to understand and implement, its simplicity also makes it vulnerable to basic attacks. Despite these limitations, the Caesar Cipher’s historical role is significant, it represents the early efforts to secure communication and has made the way for the more advanced encryption methods used today. Understanding the Caesar Cipher helps us appreciate the evolution of cryptographic techniques and the ongoing quest to protect information in our digital age.
