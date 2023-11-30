from Crypto.Cipher import AES
import hashlib
import os

os.chdir("C:\\Users\\Estrel\\Documents\\GitHub\\Practice\\Python\\Passwords_as_keys")


def decrypt(ciphertext, password_hash):
    ciphertext = bytes.fromhex(ciphertext)
    key = bytes.fromhex(password_hash)

    cipher = AES.new(key, AES.MODE_ECB)
    try:
        decrypt = cipher.decrypt(ciphertext)
    except ValueError as e:
        return {"error": str(e)}
    return decrypt


ciphertext = "c92b7734070205bdf6c0087a751466ec13ae15e6f1bcdd3f3a535ec0f4bbae66"

with open("words.txt", "r") as f:
    words = [w.strip() for w in f.readlines()]

for w in words:
    key = hashlib.md5(w.encode()).hexdigest()
    flag = decrypt(ciphertext, key)
    if b"crypto" in flag:
        print(flag)
        break
