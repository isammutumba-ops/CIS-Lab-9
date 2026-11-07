# CIS-165 Lab 8: Largest and Smallest Values

## Plan

I’ll read numbers in a `while` loop until I get `-99`. The loop should stop before comparing the sentinel with the data. I’ll keep each input in `current_value` and use `has_data` to track whether any real number has been entered. The first real number will set both the largest and smallest values; each later number will be compared with them. At the end, I’ll print the two results, or say there was no data if `-99` came first.

## Compile and run

From this folder, compile the program with:

```sh
g++ -std=c++17 -Wall -Wextra min_max.cpp -o min_max
```

Then start it with:

```sh
./min_max
```

Enter integers one at a time and use `-99` to finish. The sentinel is not part of the results.

## Test records

Each expected result below was worked out before the run. The final source compiled with the command above and produced no warnings or errors. The tests supplied values through standard input, so the captured output does not echo the input.

### Positive numbers

- Input: `4, 9, 2, -99`
- Expected: largest `9`; smallest `2`.
- Actual output:

  ```text
  Enter integers (enter -99 to finish):
  Largest value: 9
  Smallest value: 2
  ```

- Match: Yes.

### Negative numbers

- Input: `-4, -9, -2, -99`
- Expected: largest `-2`; smallest `-9`.
- Actual output:

  ```text
  Enter integers (enter -99 to finish):
  Largest value: -2
  Smallest value: -9
  ```

- Match: Yes.

### One number

- Input: `7, -99`
- Expected: largest `7`; smallest `7`.
- Actual output:

  ```text
  Enter integers (enter -99 to finish):
  Largest value: 7
  Smallest value: 7
  ```

- Match: Yes.

### Sentinel first

- Input: `-99`
- Expected: a message saying no data was entered, with no minimum or maximum.
- Actual output:

  ```text
  Enter integers (enter -99 to finish):
  No data values were entered.
  ```

- Match: Yes.

### Zero is data

- Input: `0, -99`
- Expected: largest `0`; smallest `0`.
- Actual output:

  ```text
  Enter integers (enter -99 to finish):
  Largest value: 0
  Smallest value: 0
  ```

- Match: Yes.

Temporary changes restored: none. All test inputs were supplied through standard input, so the source stayed unchanged.

## Explanation

For `8, -3, 5, -99`, the first value, `8`, sets both extrema. The next value, `-3`, is lower, so it becomes the smallest. The value `5` changes neither result. Then `-99` ends the loop. The largest value is `8`, and the smallest is `-3`.

The loop checks that the value is not `-99` before it enters the body, so the sentinel never reaches the comparisons.

Starting both extrema at zero would give the wrong answer when every value is positive or every value is negative. Zero might not have been entered at all.

`has_data` starts as `false` and becomes `true` after the first value other than `-99`. If `-99` comes first, there is no data. If `0` comes first, zero is recorded as both the largest and smallest value.

## Course reference

The sentinel-controlled `while` loop follows the approach in Tony Gaddis et al., *Starting Out with C++: Early Objects*, 10th edition, Chapter 5, Section 5.6, “Sentinels.”
