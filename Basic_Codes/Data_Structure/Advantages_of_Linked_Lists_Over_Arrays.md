Here are the three limitations of arrays that can be solved by using linked lists, with concise explanations:
1. Fixed Size

Array Limitation: Arrays have a fixed size that must be defined at creation, leading to potential wasted memory or the need for resizing.

Linked List Solution: Linked lists are dynamically sized, allowing them to grow and shrink as needed without wasting memory.
2. Expensive Insertions and Deletions

Array Limitation: Inserting or deleting elements in an array requires shifting elements, resulting in a time complexity of O(n).

Linked List Solution: Linked lists allow efficient insertions and deletions by updating pointers, with a time complexity of O(1) for these operations if the position is known.
3. Memory Utilization

Array Limitation: Arrays need a contiguous block of memory, which can lead to allocation failures for large arrays.

Linked List Solution: Linked lists allocate memory for each node independently, making better use of available memory and avoiding the need for contiguous memory blocks.
Summary

Linked lists overcome arrays' fixed size, costly insertions/deletions, and contiguous memory requirements, making them ideal for dynamic, efficient memory use and frequent modifications.