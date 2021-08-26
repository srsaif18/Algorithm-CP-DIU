from collections import OrderedDict

global cusid 
cusid = 230001

def Home():
    print("""
    Restaurant Management System

    0.Exit
    1. Food Menu
    2. Order Food
    3. Delivery
    4. Feedback
    """)

    global user_input
    user_input = int(input("Please select a number : "))

def FoodMenu():
    print("""
    Food Menu

    0.Exit
    1. Price in increasing order
    2. Price in decreasing order
    """)

    foodMenu = {
        '25' : 'Water',
        '35' : 'Cola',
        '80' : 'Sandwitch',
        '90' : 'Milkshake', 
        '100' : 'Burger',
        '100' : 'Lassi',
        '120' : 'Pizaa',
        '150' : 'Rice',
        '200' : 'Chicken',
        '350' : 'Biriyani'  
    }

    sortedfoodMenu = OrderedDict(foodMenu)

    option = int(input("Please enter a number : "))

    if option == 0:
        exit
    elif option == 1:
        for k, v in sortedfoodMenu.items():  
            print(k, v)
    elif option == 2:
        for k, v in reversed(sortedfoodMenu.items()):  
            print(k, v)
    else:
        print('Please restart & enter a valid value')


def OrderMenu():
    global num
    print("""
    Order Menu

    0.Exit
    1. New Order
    2. View Order
    """)

    option = int(input("Please select a number : "))

    if option == 0:
        exit
    elif option == 1:
        FoodMenu()
        print('''
        1. Special Order
        2. Regular Order
        ''')
    elif option == 2:
        print("Please Order First!!!")
    else:
        print('Please restart & enter a valid value')
    

    option = int(input("Please select a number : "))

    if option == 0:
        print(f'Special Order Confirmed {cusid}')
    elif option == 1:
        print(f"Regular Order Confirmed from customer {cusid}")
    else:
        print('Please restart & enter a valid value')


def Delivery():
    print("""
    Delivery

    0.Exit
    1. Confirm
    """)

    option = int(input("Please select a number : "))

    if option == 0:
        exit
    elif option == 1:
        print(f"Order confirmed from user {cusid}")
    else:
            print('Please restart & enter a valid value')

def Feedback():
    print("""
    Feedback

    0.Exit
    1. Review Us
    """)

    option = int(input("Please select a number : "))

    if option == 0:
        exit
    elif option == 1:
        print('''
        Please select a review
        1. Very Bad
        2. Bad
        3. Average
        4. Good
        5. Excellent
        ''')
    else:
        print('Please restart & enter a valid value')

    user_input = int(input('Please give us a review -> '))

    if user_input == 5:
        print(f'Thank you for 5 star review, customer {cusid}')
    elif user_input == 1:
        print(f'Thank you for 1 star review, customer {cusid}')
    elif user_input == 2:
        print(f'Thank you for 2 star review, customer {cusid}')
    elif user_input == 3:
        print(f'Thank you for 3 star review, customer {cusid}')
    elif user_input == 4:
        print(f'Thank you for 4 star review, customer {cusid}')
    else:
        print('Please restart & enter a valid value')

Home()

if user_input == 0:
    exit
elif user_input == 1:
    FoodMenu()
elif user_input == 2:
    OrderMenu()
elif user_input == 3:
    Delivery()
elif user_input == 4:
    Feedback()
else:
    print('You have entered a chosen a wrong option')
    print('Please restart the program')

