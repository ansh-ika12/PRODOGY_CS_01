# CAESAR CIPHER
The Caesar Cipher is one of the simplest and oldest methods of encrypting messages, named after Julius Caesar, who reportedly used it to protect his military communications. This technique involves shifting the letters of the alphabet by a fixed number of places. For example, with a shift of three, the letter 'A' becomes 'D', 'B' becomes 'E', and so on. Despite its simplicity, the Caesar Cipher formed the groundwork for modern cryptographic techniques. In this article, we'll explore how the Caesar Cipher works, its significance, and its impact on the development of cryptography with its advantages and disadvantages.
# CRYPTOGRAPHY ALGORITHM
-To cipher a given text we need an integer value, known as a shift which indicates the number of positions each letter of the text has been moved down. 

-The encryption can be represented using modular arithmetic by first transforming the letters into numbers, according to the scheme, A = 0, B = 1,..., Z = 25. Encryption of a letter by a shift n can be described mathematically. 

-For example, if the shift is 3, then the letter A would be replaced by the letter D, B would become E, C would become F, and so on. The alphabet is wrapped around so that after Z, it starts back at A.
## EXAMPLE
Here is an example of how to use the Caesar cipher to encrypt the message "HELLO" with a shift of 3:

-Write down the plaintext message: HELLO

-Choose a shift value. In this case, we will use a shift of 3.

-Replace each letter in the plaintext message with the letter that is three positions to the right in the alphabet.

![Alt Text]("C:\Users\asans\Downloads\Screenshot_27-7-2025_134120_www.geeksforgeeks.org.jpeg")
