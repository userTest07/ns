import string
all_letters = string.ascii_letters
text
dict1 = {}
key = 4 
for i in range(len(all_letters)):
 dict1[all_letters[i]] = all_letters[(i + key) % len(all_letters)]
plain_txt = "I am studying Data Encryption"
cipher_txt = []
for char in plain_txt:
 if char in all_letters:
 temp = dict1[char]
 cipher_txt.append(temp)
 else:
 cipher_txt.append(char)
cipher_txt = "".join(cipher_txt)
print("Cipher Text is:", cipher_txt)
dict2 = {}
for i in range(len(all_letters)):
 dict2[all_letters[i]] = all_letters[(i - key) % len(all_letters)]
decrypt_txt = []
for char in cipher_txt:
 if char in all_letters:
 temp = dict2[char]
 decrypt_txt.append(temp)
 else:
 decrypt_txt.append(char)
decrypt_txt = "".join(decrypt_txt)
print("Recovered Plain Text:", decrypt_txt)
