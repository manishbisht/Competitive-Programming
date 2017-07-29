from random import randint
import hashlib

my_topcoder_handle = 'manishbisht'
random_number = randint(0, 10000000)
text = my_topcoder_handle + str(random_number)
print my_topcoder_handle
print random_number
print hashlib.sha256(text).hexdigest()

