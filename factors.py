import sys
import math

def factorize(num):
    factors = []
    
    while num % 2 == 0:
        factors.append(2)
        num //= 2
    
    for i in range(3, int(math.sqrt(num)) + 1, 2):
        while num % i == 0:
            factors.append(i)
            num //= i
    
    if num > 1:
        factors.append(num)
    
    return factors

def main(filename):
    try:
        with open(filename, 'r') as file:
            for line in file:
                num = int(line.strip())
                factors = factorize(num)
                print(f"{num} =", " * ".join(map(str, factors)))
    except FileNotFoundError:
        print(f"File '{filename}' not found.")
    except ValueError:
        print("Invalid data in the file.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python factorize.py <filename>")
    else:
        filename = sys.argv[1]
        main(filename)

