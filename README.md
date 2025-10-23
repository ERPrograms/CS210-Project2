# CS210-Project2
**Project Summary**

The Corner Grocer project is a C++ console application designed to analyze daily sales data and report the frequency of grocery items purchased. The program reads a list of purchased items from an input file (CS210_Project_Three_Input_File.txt), counts how many times each item appears, and outputs this information in multiple ways. Users can:

Search for a specific item’s purchase frequency.

Display all items and their corresponding purchase counts.

Generate a text-based histogram to visualize item frequencies.

Exit the program.

Additionally, the program writes the computed frequencies to a backup file (frequency.dat) for record-keeping and later analysis.

This project was designed to demonstrate fundamental programming and data-handling skills in C++, including file I/O, data structures, input validation, and clean program design.

**What I Did Particularly Well**

I structured the program using a dedicated GroceryTracker class, which encapsulates all the core logic and data handling. This approach promotes modularity and makes the program easier to maintain and extend. I also focused on code readability, ensuring that variable names, comments, and function responsibilities were clear. The use of std::map was especially effective for automatically sorting items alphabetically and efficiently managing frequency counts.

**Areas for Enhancement**

If I were to enhance this project, I would:

Add case-insensitive item handling so that “apple” and “Apple” are treated as the same item.

Implement persistent data loading and saving using JSON or CSV for better integration with other systems.

Improve the user interface with formatted output, color highlighting, or a GUI-based front end.

Optimize performance for larger datasets using unordered maps or multithreading for file reading.

These improvements would make the program more efficient, user-friendly, and adaptable for real-world applications.

**Most Challenging Aspects**

The most challenging part was ensuring robust file I/O and input validation. Handling cases where files might be missing or inputs might be invalid required thoughtful error messages and recovery logic. To overcome this, I tested the program with various scenarios (missing files, blank inputs, unexpected data) and implemented checks to ensure the program remained stable.
I also reviewed C++ documentation and online tutorials (cppreference, Stack Overflow) to refine my understanding of stream handling and error management.

**Transferable Skills**

Through this project, I strengthened several key software development skills, including:

C++ object-oriented programming (encapsulation, class design, modularity).

File input/output for real-world data processing.

Use of STL containers such as std::map for efficient data management.

Defensive programming through input validation and error handling.

Version control and documentation, preparing code suitable for portfolio presentation.

These skills are directly transferable to any software engineering or data-driven project.

**Maintainability, Readability, and Adaptability**

The program was designed with clarity and structure in mind:

Encapsulating logic inside the GroceryTracker class keeps the main function simple and focused on flow control.

Consistent naming conventions and inline comments make the code easy to follow.

Using C++ standard library containers ensures portability and reliability.

The separation of data input, processing, and output simplifies future feature additions, such as database integration or new output formats.
