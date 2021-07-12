# Caesar's Cipher
Caesar's Cipher is a simple encrypt method where you shift each letter of the text with an according numerical key.

For example, the word "HELLO" when encrypted using Caesar's Cipher and a numerical key of 1 will become "IFMMP".

# System Algorithm (How it operates)
We use the [Decimal ASCII Chart](https://www.asciichart.com/[asciichart.com) in the implementation of the algorithm, converting ASCII to alphabetical index in the ciphertext.
First we create two lists to store uppercase and lowercase letters, in a way to attribute values from 0 to 25 (26 letters in the alphabet).
After validating the key passed as a comand-line argument, we iterate through plain_text and add key to each character.

Example: 

| Plaintext | Key | Ciphertext  |
| -------   |:---:| :----------:|
| H         | 1   | I           |
| E         | 1   | F           |
| L         | 1   | M           |
| L         | 1   | M           |
| 0         | 1   | P           |
