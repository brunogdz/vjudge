# Lanche

price = [4.00, 4.50, 5.00, 2.00, 1.50]

x = input().split()

a, b = x
a, b = int(a), int(b)
value = price[a-1]*b
print('Total: R$ {:.2f}'.format(value))