#function to find factorial of a passed number
def factorial(n):
    if n==0:
        return 1
    else:
        return n*factorial(n-1)


if __name__ == "__main__":
#code to take 2 numbers and perform addition, subtraction, multiplication, division, sqroot
    print("Enter two numbers: ")
    a = int(input())
    b = int(input())
    print("Enter the operation to be performed: ")
    op = input()
    if op == "+":
        print(a + b)
    elif op == "-":
        print(a - b)
    elif op == "*":
        print(a * b)
    elif op == "/":
        print(a / b)
    elif op == "sqroot":
        print(a ** 0.5)
    else:
        print("Invalid operation")
    #code to find factorial of a number
    print("Enter a number: ")
    n = int(input())
    print("Factorial of ", n, " is ", factorial(n))

#end of program

