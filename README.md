# Academic Honesty
If you are taking Harvard's CS50 - Introduction to Computer Science course you **must follow the course's [Academic Honesty philosophy](https://cs50.harvard.edu/x/2021/honesty/)**.

It is not reasonable to access a solution to some assessement prior to (re-)submitting your own.

The essence of all work that you submit to the CS50 course **must be your own**. 

# Caesar's Cipher
Caesar's Cipher is a simple encrypt method where you shift each letter of the text with an according numerical key.

For example, the word "HELLO" when encrypted using Caesar's Cipher and a numerical key of 1 will become "IFMMP".

# System Algorithm (How it operates)
This is a command-line application and it was fully developed in **C**.

We use the [Decimal ASCII Chart](https://www.asciichart.com/[asciichart.com) in the implementation of the algorithm, converting ASCII to alphabetical index in the ciphertext.
First we create two lists to store uppercase and lowercase letters, in a way to attribute values from 0 to 25 (26 letters in the alphabet).

After validating the key passed as a command-line argument, we iterate through plain_text and add key to each character.

Example: 

| Plaintext | Key | Ciphertext  |
| -------   |:---:| :----------:|
| H         | 1   | I           |
| E         | 1   | F           |
| L         | 1   | M           |
| L         | 1   | M           |
| 0         | 1   | P           |


It will encrypt uppercase and lowercase letters, keeping them in the same configuration as before. Numbers, punctuation and special characters will not be encrypted.

# Usage
To use and test this program, you will need [CS 50 Library](https://cs50.readthedocs.io/libraries/cs50/c/). Copy this repository and through the command line, enter the program's folder and run the following command to compile:

$ make caesar

The numerical key to encrypt must be an integer.

./caesar <numerical key>

The program will ask for a plaintext, which will be spilled back to you using the numeric key you inserted in the previous command as a ciphertext.

  > Plaintext: -text to encrypt-
  
  > Ciphertext: -returns ciphertext using the key you provided-
  
  
