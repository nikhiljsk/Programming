"""
IOError
ValueError
ImportError
EOFError
KeyboardInterrupt

try:
    -----
    -----
    -----
except IOError:
    print("File not found")

#finally executes if or not except get executed...all the important statements are present here
example--->f.close()
finally:   #Used when a file is opened in try and then an error occurs in the middles
    --------
"""

"""
try:
    f=open("123.txt","r")  #Excuted and error is returned
except IOError:            #Executed since  error found
    print("Not found")
finally:
    f.close()               #Cannot be executed because file is not opened
    
"""
"""
try:
    num=int(input("Enter number between 1-10"))
except ValueError:
    print("Enter only integers")
"""
"""
1.)write a PP to combine each file from first file with the corresponding line in second line.
"""
