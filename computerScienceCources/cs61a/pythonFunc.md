# lab06

## nonlocal

nonlocal关键字用于解决想在local空间为父空间赋值的情况

```python
def withdraw_money(balance):
    def withdraw(money):
        nonlocal balance
        balance = balance-money
        return balance
    return withdraw
withdraw = withdraw_money(100)
withdraw(50)
```

## object oriented 

__init__函数初始化类对象，在调用类内函数时，类对象以参数形式传入，一般用self代指类对象，python隐式（implicit）为self传入对象

## python list 删除元素

del (是python固有方法非list特有)

remove (特定元素)

pop(index) (知道特定元素下标)