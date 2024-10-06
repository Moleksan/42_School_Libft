# 42_School_Libft  

Welcome to my Libft project! This project involved creating my own C library, which includes a variety of general-purpose functions that are essential for many programming tasks. The goal was not only to replicate standard library functions but also to deepen my understanding of how they work internally.  
  
1. Mandatory Functions: I recreated essential functions    from the C standard library, including string manipulation and memory management functions. These functions all have an 'ft_' prefix, such as ft_strlen, ft_memcpy, and ft_strchr.  

2. Additional Functions: I also added custom functions that are not part of the standard library but are helpful in various programming scenarios, such as ft_substr, ft_strjoin, and ft_split.  

3. Bonus Part: For the bonus section, I worked on linked list manipulations, implementing functions to create and manage linked lists efficiently. This part was particularly interesting and helped me understand data structures better.  

# Step-by-Step Approach  

- Setting Up the Project: I started by organizing my project structure. All source files were placed in the root directory, and I created a Makefile to compile my library.  
  
- Implementing Mandatory Functions: I carefully studied the prototypes and behaviors of the standard library functions I needed to replicate. This involved writing my own versions while ensuring they adhered to the same specifications.  
  
- Memory Management: I focused on memory allocation and management since many functions required dynamic memory allocation. I made sure to handle memory leaks by freeing allocated memory properly.  
  
- Testing: I wrote several test programs to verify that my functions worked correctly. This was crucial for debugging and ensuring that each function met the required specifications.  
  
- Bonus Functions: After completing the mandatory functions, I moved on to the bonus section. This involved creating linked list structures and implementing functions like ft_lstnew and ft_lstadd_front.  
  
# Throughout this project, I learned a lot about:
  
C Programming: My understanding of C improved significantly, particularly in memory management and function implementation.  
  
Standard Library Functions: I gained insights into how standard functions work, enhancing my problem-solving skills and ability to write efficient code.  
  
Data Structures: Implementing linked lists deepened my understanding of data structures and their practical applications in programming.  

# How to Use  
  
To compile the library, run the following commands:  

    make
  
To clean the project directory, run:  

     make clean  

To remove all compiled files, run:  

    make fclean  

To create bonus functions, run:  
  
   make bonus  
  
Feel free to explore the code and see how each function is implemented!  

 


