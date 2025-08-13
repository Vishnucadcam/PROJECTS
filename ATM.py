username="VISHNU"
cash=10000
user=input("ENTER YOUR USER-")
if user==username:
    print("WELCOME")
    print("CASH BALANCE=",cash)
    print("PRESS 1 FOR CASH WITHDRAWAL-")
    print("PRESS 2 FOR DEPOSIT-")
    a=int(input())
    if a==1:
        print("ENTER THE AMOUNT")
        b=int(input())
        d=cash+b
        print("CASH BALANCE-",d)
    else:
        print("ENTER THE AMOUNT")
        c = int(input())
        e=cash-c
        print("CASH BALNCE-",e)
else:
    print("INVALID")