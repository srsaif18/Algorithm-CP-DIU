catagories = ('18 years or above students', 'Citizen registration (25 years or above)', 'Military forces (Police/Army/BGB)', 'Health Service (Doctors/Nurse/Others)', 'Bankers', 'Farmers', 'Freedom Fighter', 'Educational Organization', 'Elected Parliament Member', 'Workers')

print('Please Select a Catagory: \n')

for (i, item) in enumerate(catagories, start=1):
    print(i, item)
    
print()
choice = int(input('Please enter a value : '))
print()

if choice == 1:
    catagory = '18 years or above students'
elif choice == 2:
    catagory = 'Citizen registration (25 years or above)'
elif choice == 3:
    catagory = 'Military forces (Police/Army/BGB)'
elif choice == 4:
    catagory = 'Health Service (Doctors/Nurse/Others)'
elif choice == 5:
    catagory = 'Bankers'
elif choice == 6:
    catagory = 'Farmers'
elif choice == 7:
    catagory = 'Freedom Fighter'
elif choice == 8:
    catagory = 'Educational Organization'
elif choice == 8:
    catagory = 'Elected Parliament Member'
elif choice == 8:
    catagory = 'Workers'
else:
    print('Wrong input')

class Person:
    def __init__(self, catagory, name, age, phone, vc, vaccine):
        self.catagory = catagory
        self.name = name
        self.age = age
        self.phone = phone
        self.vc = vc
        self.vaccine = vaccine

    def display(self):
        print("Catagory: ", self.catagory)
        print("Name: ", self.name)
        print("Age: ", self.age)
        print("Phone Num: ", self.phone)
        print("Vaccination Center: ", self.vc)
        print("Vaccination Name: ", self.vaccine)


    def registration(self):
        print('**********************************************************')
        print("Congratulation! Your 1st dose of vaccination is completed.")
        print('**********************************************************')
        self.display()
        
        if self.catagory != 'Military forces (Police/Army/BGB)' or 'Health Service (Doctors/Nurse/Others)':
            print('Sorry! This feature is not available')
        else:
            print('\nYou can change your centre')

        print('Stay Safe!\nStay Home!')
        print('')

name = input('Enter name: ')
dob = input('(Format : 01/01/2000) Enter dob: ')
phone = input('Enter phone: ')

age = 2021 - int(dob[6:10])

centres = ('Barisal', 'Chittagong', 'Dhaka', 'Khulna', 'Mymensingh', 'Rajshahi', 'Rangpur', 'Sylhet')

print('Please Select a Centre: \n')

for (i, item) in enumerate(centres, start=1):
    print(i, item)

print()
choice = int(input('Please enter a value : '))
print()

if choice == 1:
    vc = 'Barisal'
elif choice == 2:
    vc = 'Chittagong'
elif choice == 3:
    vc = 'Dhaka'
elif choice == 4:
    vc = 'Khulna'
elif choice == 5:
    vc = 'Mymensingh'
elif choice == 6:
    vc = 'Rajshahi'
elif choice == 7:
    vc = 'Rangpur'    
elif choice == 8:
    vc = 'Sylhet'
else:
    print('Wrong input')

if vc == 'Dhaka' or 'Chittagong':
    vaccine = 'Mordena'
else:
    vaccine = 'Sinopharm'

p = Person(catagory, name, age, phone, vc, vaccine)

p.registration()

