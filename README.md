# extlist
Prints all file paths, within a directory, with a given extension, to the command line.
It's ls -l | grep for file extensions if you have never seen a vagina.


Usage: "extlist extension (directory)"

If no directory is given, it assumes the local directory is the operating dir.
It outputs the file to the console all at once, so it can easily be piped or saved to a file.

Saving to file looks like this: "extlist .txt >> textlist.txt"
This creates a text file and writes the output of extlist to it, which should contain all .txt file paths.
">" clears then writes file data
">>" appends data to end of file. use this to add to an already created pathlist.
Using this, you can create large work queues for files of a certain type.

Output is formatted with a newline character after every path.
