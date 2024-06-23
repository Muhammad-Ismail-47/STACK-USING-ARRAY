# STACK-USING-ARRAY
This Repo Provides Complete Code for Stack Data Structure Implemented Using Array (C++). 

Stack is a linear data structure. Stack works on Last in First out discipline that means whatever comes last leaves first. The insertion and the deletion is from the same end unlike queue where insertion is from the rear end and the deletion is from the front-end.

# APPLICATIONS:
•	Undo functionalities.
•	Used in tracking functions calls
•	Parenthesis matching and more.
•	Infix to Postfix Conversion (and other similar conversions)

# IMPLEMENTATION:
A stack can be implemented by using both array and linked list. This code contains Implementation using Array.

# OPERATIONS:
•	push(): push an element into the stack.
•	pop(): remove the top most element from the stack and returns it.
•	isEmpty(): Determine whether the stack is empty.
•	isFull(): Determine whether the stack is full.

# WORKING:
In Stack there is a pointer the top most element which name is “ top ” and is initialized with -1. Whenever anything is pushed in stack the pointer increments and start representing the index of the top most element. And whenever anything is popped the pointer decrements. 
•	When top = =  -1 it means the stack is empty.
•	When top = = StackSize – 1 it means that the stack is full.
