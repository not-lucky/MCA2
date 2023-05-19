from random import choice

a = ['MCA', 'BCA', 'M.SC IT']
month = ['JAN', 'FEB', 'MAR', 'OCT', 'NOV']

for i in range(6):
  print(f"INSERT INTO STUDENT VALUES ({i}, 'S_{i}', '{i+1}-{choice(month)}-{i}', {i});")
  
for i in range(100, 105):
  print(f"INSERT INTO FACULTY VALUES ({i}, 'F_{i}', '{choice(a)}', {i*100});")
  
for i in range(200, 205):
  print(f"INSERT INTO COURSE VALUES ({i}, 'C_{i}', {i+100}, '{choice(a)}');")
 
 