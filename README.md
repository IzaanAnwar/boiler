# BOILER

The Very Gorgeouu Boiler Plate Generator.

## Usage

1. Run the program.
2. Enter the project location when prompted.
3. The program will create the destination directory if it does not exist.
4. The program will copy the content from the source file (used for now) to the destination file.
5. Enjoy.

## Code Overview

The program performs the following steps:

1. Prompts the user to enter the project location and reads the file location.
2. Concatenates the entered file location with the destination path.
3. Opens the source file for reading.
4. Extracts the directory path from the destination location.
5. Creates the destination directory if it does not exist.
6. Opens the destination file for writing.
7. Copies the content from the source file to the destination file.
8. Closes the files.

## Requirements

The program requires the following libraries:

- `stdio.h`: For input/output operations.
- `stdlib.h`: For dynamic memory allocation and program termination.
- `string.h`: For string manipulation operations.
- `sys/types.h`, `sys/stat.h`, `unistd.h`: For file system operations.


## Example

Here is an example usage of the program:


In this example, the user enters the project location as `/home/[user]/Projects/test`. The program creates the `test` directory if it does not exist and copies the content from the source file to the destination file.

## Conclusion

This program is intended to be a great boiler plate generator.

For any questions or further assistance, please reach out.


# boiler
