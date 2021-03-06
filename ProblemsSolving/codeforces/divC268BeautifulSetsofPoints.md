# Type: math, implementation

对于平面上的一个$m\times n$ 不包含原点的区域，求最多的整数点对（即横坐标，纵坐标均为整数），使得各整数点对间的距离不为整数。

容易知道，整数点对最多为m+1（取m为m,n中的最小者），因在同一条线上的点对距离必然是整数，因此m到0共有m+1条线，次优解是取对角线(i,i)，这样必然能取到(m-1+1)个点对。但能否找到一条比对角线更好的线呢？

如果只是单纯一个个试点是很琐碎也难以解决的。实际上可以选择直线 x+y=m，这样必然是可以取到m+1个点的，此题至此也终结了。