from collections import OrderedDict

global cusid 
cusid = 100001

def Delivery():
    print("""
Delivery Menu

    Press 0 for Exit
    Press 1 for Confirm
    """)

    option = int(input("Please select a number : "))

    if option == 0:
        exit
    elif option == 1:
        print(f"Order confirmed from user {cusid}")
    else:
        print('Wrong Choice!!!')
        print('Please, restart the program')

def Feedback():
    print("""
Feedback Menu

    Press 0 for Exit
    Press 1 for Review Us
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
        print('Wrong Choice!!!')
        print('Please, restart the program')

    user_input = int(input('Give us a review -> '))

    if user_input == 5:
        print(f'Received 5 star review from customer {cusid}')
    elif user_input == 1:
        print(f'Received 1 star review from customer {cusid}')
    elif user_input == 2:
        print(f'Received 2 star review from customer {cusid}')
    elif user_input == 3:
        print(f'Received 3 star review from customer {cusid}')
    elif user_input == 4:
        print(f'Received 4 star review from customer {cusid}')
    else:
        print('Please restart & enter a valid value')

def Home():
    print("""
Restaurant Management System

    Press 0 for Exit
    Press 1 for Food Menu
    Press 2 for Order Food
    Press 3 for Delivery
    Press 4 for Feedback
    """)

    global user_input
    user_input = int(input("Please select a number : "))

def FoodMenu():
    print("""
Food Menu

    Press 0 for Exit
    Press 1 for Price in accending order
    Press 2 for Price in decending order
    """)

    foodMenu = {
        '25' : 'Water',
        '40' : 'Pepsi',
        '60' : 'French Fries',
        '70' : 'Egg Turt',
        '90' : 'Chicken Fry',
        '110' : 'Nachos',
        '120' : 'Bubble Tea',
        '140' : 'Chicken Nugget',
        '180' : 'Chao Min',
        '250' : 'Burger'               
    }

    sortedfoodMenu = OrderedDict(foodMenu)

    option = int(input("Please enter a number : "))

    if option == 0:
        exit
    elif option == 1:
        for k, v in sortedfoodMenu.items():  
            print(v, '---', k)
    elif option == 2:
        for k, v in reversed(sortedfoodMenu.items()):  
            print(v, '---', k)
    else:
        print('Wrong Choice!!!')
        print('Please, restart the program')


def OrderMenu():
    global num
    print("""
Order Menu

    Press 0 for Exit
    Press 1 for New Order
    Press 2 for View Order
    """)

    option = int(input("Please select a number : "))

    if option == 0:
        exit
    elif option == 1:
        FoodMenu()
        print('''
        Press 1 for Special Order
        Press 2 for Regular Order
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
        print('Wrong Choice!!!')
        print('Please, restart the program')


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
    print('Wrong Choice!!!')
    print('Please, restart the program')
