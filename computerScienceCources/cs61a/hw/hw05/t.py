from hw05 import *
if __name__ == "__main__":
    t1 = Tree(1, [Tree(2, [Tree(3), Tree(4, [Tree(6)]), Tree(5)]), Tree(5)])
    path_to_5 = generate_paths(t1, 5)
    print(sorted(list(path_to_5)))