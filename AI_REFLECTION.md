# AI Reflection

### Tools

I used AI to help explain the sentinel-controlled `while` loop, draft `min_max.cpp`. I also referred to Tony Gaddis et al., *Starting Out with C++: Early Objects*, 10th edition, Chapter 5, Section 5.6. 

### One decision

The program uses the first real number to start both extrema. That way, it does not assume zero was entered, and it still works with positive, negative, or single-value input.

### A specific check

One check recorded in the README uses `-4, -9, -2, -99`. The expected largest value was `-2` and the smallest was `-9`; the actual output matched. The source compiled with `g++ -std=c++17 -Wall -Wextra` and produced no compiler messages. This check covers an all-negative series and confirms the sentinel is excluded.

### Learning

I still need to practice how I draft my loop-based input processing and safe initialization of variables. While I was assisted in planning the program with AI, I still need to practice planning how to structure the correct initialization of min/max using data that is already given rather than input-based data.