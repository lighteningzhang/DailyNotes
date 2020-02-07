from lab07 import *
if __name__ == "__main__":
    t1 = Tree(2, [Tree(1, [Tree(5)]), Tree(4)])
    print(is_bst(t1))