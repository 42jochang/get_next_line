# [42] Get Next Line

This project is one of the earlier projects in the 42 cadet curriculum. The entire purpose of this function is to recreate getline, a very useful tool for reading input. Dynamic buffer size is a requirement for this project, as well as keeping track of multiple file descriptors. For the 42 curriculum, this is the first project to make use of static variables.

### Possible Optimization

Due to using a singly linked list to keep track of every buffer, it takes O(n) time to get to the correct buffer. Full bonuses could be achieved by fixing the edge case of attempting to pass in a ridiculously large file size.

## Final Score

117/100

## Usage

To include in libft.

## Norme

This project is coded in accordance with the school's norms. A full copy of the norm can be found [here](https://github.com/MagicHatJo/-42-Norm/blob/master/norme.en.pdf).
