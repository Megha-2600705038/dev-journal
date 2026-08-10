# Strings
> Strings are written in single or double qoutes.

Example:
```python
print("Hello")
print('Hello')
```

# Slicing 
> Can return a range of characters by using this syntax.
> To get a part of string specify the start and end index separated by a comma.
Example:
```python
x = 'Hello, World'
print(x[1:5])
```
> For slicing from the start, the range will start at the first character.
> Only specify the end index value.
Example:
```python
x = 'Hello, World'
print(x[:3])
```

> For slicing to the end, the range will go to the end.
> Only specify the star index value
Example:
```python
x = 'Hello, World'
print(x[4])
```

# Modifying

1.Upper Case
Example:
```python
x = 'Hello World'
print(x.upper())
```
2.Lower Case
Example:
```python
x = 'Hello World'
print(x.lower())
```
3.Remove Whitespace
Example:
```python
x = ' Hello World '
print(x.strip())
```
4.Split
Example:
```python
x = 'Hello, World'
print(x.split(","))
```
5.Replace one string to another string
Example:
```python
x = 'Hello World'
print(x.replace('H','J'))
```
# String concatenation
> To combine a string use + operator.
Example:
```python
x = 'Hello'
y = 'World'
z = x+y
print(z)
```


















