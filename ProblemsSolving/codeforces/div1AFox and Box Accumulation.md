## Type: greedy, implement

题意： 给n个箱子，每个箱子上面最多只能放规定个数的箱子，现要将n个箱子摞起来，求最少摞多少堆即可。

误区：如果考虑从底部开始往上堆（从大到小排序），容易进入误区，如 10，3，3，2，2，2。在a[i] 与 a[i+1] 相等时，不知道到底堆不堆起来，如果堆起来可能会造成之后的堆数增加，因为底部的都是大数，在使用之后，后面的箱子都是小的数字，会增加堆数

因此考虑从小的开始往大的堆。可以用flag数组或一个hash表来记录当前的箱子是否使用。如果没被使用并且还能堆上，那就把箱子放在该堆。