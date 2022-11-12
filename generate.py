import string # string module
import random # random module

numbers = list(string.digits) # 0123456789
symbols = list(string.punctuation) # !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
lowercase = list(string.ascii_lowercase) # abcdefghijklmnopqrstuvwxyz
uppercase = list(string.ascii_uppercase) # ABCDEFGHIJKLMNOPQRSTUVWXYZ

number_of_characters = input("How many characters do you want in your password ? ") # number of characters

while True:
    try:
        number_of_characters = int(number_of_characters) # Convert to integer
        if number_of_characters < 8: # Check if the number is less than 8
            number_of_characters = input("Please enter a number greater than 8 : ")
        else:
            break
    except :
        print("Please enter a number")
        number_of_characters = input("How many characters do you want in your password ? ")        
          
# Shuffle the list          
random.shuffle(numbers) 
random.shuffle(symbols) 
random.shuffle(lowercase)
random.shuffle(uppercase)

password = [] 

part_1 = part_2 = round(number_of_characters * (25 / 100)) # 25% of the number of characters


for i in range(part_1):
    password.append(random.choice(uppercase)) # Add a random uppercase letter
    password.append(random.choice(lowercase)) # Add a random lowercase letter

for i in range(part_2):
    password.append(random.choice(symbols)) # Add a random symbol
    password.append(random.choice(numbers)) # Add a random number

random.shuffle(password) # Shuffle the list
 
password = "".join(password) # Convert the list to a string 

print("password : ", password)


