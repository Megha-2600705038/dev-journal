# Lists
> Used to store multiple items in a single variable.
> It's one of the built in data type(list, tuple, set, dictionary)
> Created using square brackets
Example:
```python
theList = ['apple', 'orange', 'banana']
print(theList)
```
> Items are changeable, ordered and allow duplicates.
> The item are indexed, first item has the index [0], second one has [1] and goes on
> Can contain different data types.

1.List length
Example:
```python
theList =  ['apple', 'orange', 'banana', 'mango']
print(len(theList))
```
2. Data type 
Example:
```python
theList = ['apple', 'orange', 'banana', 'mango']
print(type(theList))
```
3.List constructor
> Used when creating a new list.
Example:
```python
theList = list(('apple', 'banana', 'mango', 'orange'))
print(theList)
```
> Lists items are indexed and can access them by referring to the index number.
 Example:
```python
theList = ['apple', 'orange', 'banana', 'mango']
print(theList[1])
```
> To add an item into the end of a list use append() method.
 Example:
```python
theList = ['apple', 'orange', 'banana', 'mango']
theList.append('blueberry')
print(theList)
```
> To insert a item into the list use insert()
Example:
```python
theList = ['apple', 'orange', 'banana', 'mango']
theList(1,'tomatto')
print(theList)
```
> To remove a specific item from the list use remove().
Example:
```python
theList = ['apple', 'orange', 'banana', 'mango']
theList('apple')
print(theList)
```
> To remove a specified index use pop().
Example:
```python
theList = ['apple', 'orange', 'banana', 'mango']
theList(1)
print(theList)
```
> The clear() empties the list. The list still remains, but it has no content.
Example:
```python
theList.clear()
print(theList)
```











