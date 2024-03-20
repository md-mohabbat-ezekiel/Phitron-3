class Bank:
    def __init__(self):
        self.accounts = {}
        self.account_number = 1

    def create_account(self, name, email, address, account_type):
        account = {
            "Name": name,
            "Email": email,
            "Address": address,
            "Account Type": account_type,
            "Balance": 0
        }
        self.accounts[self.account_number] = account
        print(f"Account created with Account Number: {self.account_number}")
        self.account_number += 1

    def view_account(self, account_number):
        account = self.accounts.get(account_number)
        if account:
            print("Account Details:")
            for key, value in account.items():
                print(f"{key}: {value}")
        else:
            print("Account not found. Please check the Account Number.")

def main():
    bank = Bank()

    while True:
        print("\nBanking Management System")
        print("1. Create Account")
        print("2. View Account Details")
        print("3. Exit")

        choice = input("Enter your choice (1/2/3): ")

        if choice == "1":
            name = input("Name: ")
            email = input("Email: ")
            address = input("Address: ")
            account_type = input("Account Type (Savings/Current): ").capitalize()
            if account_type not in ["Savings", "Current"]:
                print("Invalid account type. Please choose Savings or Current.")
            else:
                bank.create_account(name, email, address, account_type)

        elif choice == "2":
            account_number = int(input("Enter your Account Number: "))
            bank.view_account(account_number)

        elif choice == "3":
            print("Exiting the program. Thank you!")
            break

        else:
            print("Invalid choice. Please enter 1, 2, or 3.")

if __name__ == "__main__":
    main()
