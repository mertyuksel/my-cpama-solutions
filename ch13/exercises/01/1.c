// b, c, e, h, i, j will not work as expected. 

// b - %c expects a character but receives a string so it won't work.
// c - %s expects a string but receives a character so it won't work.
// e - printf cannot accept a character as an argument so it won't work.
// h - putchar cannot accept a string as an argument so it won't work.
// i - puts cannot accept a character as an argument so it won't work.
// j - puts("\n") prints two newline characters, not a single newline character. 