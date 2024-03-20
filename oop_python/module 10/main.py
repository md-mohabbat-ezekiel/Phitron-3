from menu import Pizza,Burger,Drinks,Menu
from restaurant import Restaurant
from user import Chef,Customer,Server,manager
from order import Order

def main():
    menu=Menu()
    pizza_1=Pizza('shutki pizza',600,'large',['shutki','onion'])
    menu.add_menu_item('pizza',pizza_1)
    pizza_2=Pizza('Alur viorta pizza',800,'large',['potato','onion'])
    menu.add_menu_item('pizza',pizza_2)
    pizza_3=Pizza('dal pizza',500,'large',['dal','oil'])
    menu.add_menu_item('pizza',pizza_3)

    # add burger to the menu
    burger_1=Burger('naga burger',1000,'chicken',['bread','chili'])
    menu.add_menu_item('burger',burger_1)
    burger_2=Burger('beef burger',1500,'beef',['cow','haddi'])
    menu.add_menu_item('burger',burger_2)

    #add drinks to the menu
    coke=Drinks('coke',50,True)
    menu.add_menu_item('drinks',coke)
    cofee=Drinks('mocha cofee',50,True)
    menu.add_menu_item('drinks',cofee)

    # show menu
    menu.show_menu()

    restaurant=Restaurant('Sai Baba Resturent',2000,menu)
    

    # add employee
    manager=manager('kala chan manager',5,'kalachan@gmail.com','kalipur',1500,'January 1 2020','core')
    restaurant.add_employee('manager',manager)
    Chef=Chef('Rustom Baborchi',6,'Chuparustom@gmail.com','rudtomNager',3500,'feb 1,2020','Chef','everything' )
    restaurant.add_employee('chef',Chef)
    server=Server('chuto server',6,'naijai@gmail.com','restaurant',300,'3 march 2020','server')
    restaurant.add_employee('server',Server)    
    
    #show employee:
    restaurant.show_employee()

    #customer 1 placing an order
    customer_1=Customer('sakib khan',6,'kingkhan@gmail.com',"banani",1000)
    order_1=Order(customer_1,[pizza_3,cofee])
    customer_1.pay_for_order(order_1)
    restaurant.add_order(order_1)


    # customer one paying for order_1
    restaurant.receive_payment(order_1,200,customer_1)
    print('revenue and balance', restaurant.revenue,restaurant.balance)

    #customer 2 placing an order
    customer_2=Customer('mushfiq',6,'kingkhan@gmail.com',"banani",1000)
    order_2=Order(customer_2,[pizza_3,cofee])
    customer_1.pay_for_order(order_2)
    restaurant.add_order(order_2)
    # customer one paying for order_1
    restaurant.receive_payment(order_2,2000,customer_2)
    print('revenue and balance after second customer', restaurant.revenue,restaurant.balance)
    
    # pay rent
    restaurant.pay_expense(restaurant.rent,'Rent')
    print('after rent', restaurant.revenue,restaurant.balance)    


# call the main
if __name__=='__main__':
    main()