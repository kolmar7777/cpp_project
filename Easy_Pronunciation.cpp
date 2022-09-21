import csv
import threading
import hashlib


ramz = dict()
adad_hash = dict()
with open('password.csv') as csvfile :
    spamreader = csv.reader(csvfile)
    for name, password in spamreader :
        ramz[password] = name
        # print(ramz)

def hash_num1( n ) :
    i = n + 625
    while n != i :
    # Hash a single string with hashlib.sha256
        a_string = str( n )
        hashed_string1 = hashlib.sha256(a_string.encode('utf-8')).hexdigest()
        # print(hashed_string)
        adad_hash[str( n )] = hashed_string1
        n += 1
    n -= 625    
    # looking for password
    while n != i :
        if adad_hash[str( n )] in ramz :
            a = ramz[adad_hash[str( n )]] 
            print('password %s hast %s ' %(a, str( n )) )
        n += 1



if _name_ == "_main_" :
    
    t1 = threading.Thread(target= hash_num1, args=(1,)) 
    t2 = threading.Thread(target= hash_num1, args=(625,))
    t3 = threading.Thread(target= hash_num1, args=(1250,)) 
    t4 = threading.Thread(target= hash_num1, args=(1875,))
    t5 = threading.Thread(target= hash_num1, args=(2500,)) 
    t6 = threading.Thread(target= hash_num1, args=(3125,))
    t7 = threading.Thread(target= hash_num1, args=(3750,)) 
    t8 = threading.Thread(target= hash_num1, args=(4375,))
    t9 = threading.Thread(target= hash_num1, args=(5000,)) 
    t10 = threading.Thread(target= hash_num1, args=(5625,))
    t11 = threading.Thread(target= hash_num1, args=(6250,)) 
    t12 = threading.Thread(target= hash_num1, args=(6875,))
    t13 = threading.Thread(target= hash_num1, args=(7500,)) 
    t14 = threading.Thread(target= hash_num1, args=(8125,))
    t15 = threading.Thread(target= hash_num1, args=(8750,)) 
    t16 = threading.Thread(target= hash_num1, args=(9375,))

    t1.start()
    t2.start()
    t3.start()
    t4.start()
    t5.start()
    t6.start()
    t7.start()
    t8.start()
    t9.start()
    t10.start()
    t11.start()
    t12.start()
    t13.start()
    t14.start()
    t15.start()
    t16.start()

    t1.join()
    t2.join()
    t3.join()
    t4.join()
    t5.join()
    t6.join()
    t7.join()
    t8.join()
    t9.join()
    t10.join()
    t11.join()
    t12.join()
    t13.join()
    t14.join()
    t15.join()
    t16.join()