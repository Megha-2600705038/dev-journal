# Global Variable
> A variable created outside of a function
> That variable can be used every where in that program, both inside and outside of a function.

Example:
```python
x = 'developer'

def myfun():
  print("You are a " + x)

myfun()
```
> If you create a variable with same name as global variable inside a function that variable is called local variable and it is only used inside that function.
> The value of the global variable remain the same.

Example:
```python
x = 'great'

def myfun():
  x = 'wonderful'
  print('You are ' + x)

my fun()
print('You are ' + x)
```

# Global keyword
> To create a variable into global variable use global keyword

Example:
```python
def myfun():
  global x
  x = 'good'
  print("Yor are " + x)
myfun()
```

> Also want to change the value of a variable inside a function refer to the variable using global key word.

Example:
```python
x = 'wonderful'

def myfun():
  global x
  x = 'beautiful'

myfun()
print(x)
```













