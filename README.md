# Arrays-and-strings-using-c
 Array in C is one of the most used data structures in C programming. It is a simple and fast way of storing multiple values under a single name. In this article, we will study the different aspects of array in C language such as array declaration, definition, initialization, types of arrays, array syntax, advantages and disadvantages, and many more.

What is Array in C?
An array in C is a fixed-size collection of similar data items stored in contiguous memory locations. It can be used to store the collection of primitive data types such as int, char, float, etc., and also derived and user-defined data types such as pointers, structures, etc.
![image](https://user-images.githubusercontent.com/125429673/234371694-a4a19ef4-227a-48b2-9d51-df097f2dad1a.png)
Arrays have 0 as the first index, not 1. In this example, mark[0] is the first element.
If the size of an array is n, to access the last element, the n-1 index is used. In this example, mark[4]
Suppose the starting address of mark[0] is 2120d. Then, the address of the mark[1] will be 2124d. Similarly, the address of mark[2] will be 2128d and so on.
This is because the size of a float is 4 bytes.
