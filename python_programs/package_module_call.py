# calling functionn of module.py and book.py in module_call.py
# (*) import all atributes from module.py
# both from and imort does same work 
# this is a program extracting data from packet folder cosist of init, book, module file
# from directly import all attributes where import uses <object.attribute>
from packet.module import *
import packet.module
import packet.book

pay = bill(200,5)
print "bill is : ",pay
speed(500,5)

print "Notice : ",NOTICE
print "GDP is : ",GDP
# whenever using import book method use calling function as "book.course" 
c1 = packet.book.course(4505, "python", 9500)
print c1
# it re-execute module
reload(packet.module)
