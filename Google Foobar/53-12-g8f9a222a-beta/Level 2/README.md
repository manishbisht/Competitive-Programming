# Problem 1

Lovely Lucky LAMBs
==================

Being a henchman isn't all drudgery. Occasionally, when Commander Lambda is feeling generous, she'll hand out Lucky LAMBs (Lambda's All-purpose Money Bucks). Henchmen can use Lucky LAMBs to buy things like a second pair of socks, a pillow for their bunks, or even a third daily meal!

However, actually passing out LAMBs isn't easy. Each henchman squad has a strict seniority ranking which must be respected - or else the henchmen will revolt and you'll all get demoted back to minions again! 

There are 4 key rules which you must follow in order to avoid a revolt:
    1. The most junior henchman (with the least seniority) gets exactly 1 LAMB.  (There will always be at least 1 henchman on a team.)
    2. A henchman will revolt if the person who ranks immediately above them gets more than double the number of LAMBs they do.
    3. A henchman will revolt if the amount of LAMBs given to their next two subordinates combined is more than the number of LAMBs they get.  (Note that the two most junior henchmen won't have two subordinates, so this rule doesn't apply to them.  The 2nd most junior henchman would require at least as many LAMBs as the most junior henchman.)
    4. You can always find more henchmen to pay - the Commander has plenty of employees.  If there are enough LAMBs left over such that another henchman could be added as the most senior while obeying the other rules, you must always add and pay that henchman.

Note that you may not be able to hand out all the LAMBs. A single LAMB cannot be subdivided. That is, all henchmen must get a positive integer number of LAMBs.

Write a function called answer(total_lambs), where total_lambs is the integer number of LAMBs in the handout you are trying to divide. It should return an integer which represents the difference between the minimum and maximum number of henchmen who can share the LAMBs (that is, being as generous as possible to those you pay and as stingy as possible, respectively) while still obeying all of the above rules to avoid a revolt.  For instance, if you had 10 LAMBs and were as generous as possible, you could only pay 3 henchmen (1, 2, and 4 LAMBs, in order of ascending seniority), whereas if you were as stingy as possible, you could pay 4 henchmen (1, 1, 2, and 3 LAMBs). Therefore, answer(10) should return 4-3 = 1.

To keep things interesting, Commander Lambda varies the sizes of the Lucky LAMB payouts: you can expect total_lambs to always be between 10 and 1 billion (10 ^ 9).

Languages
=========

To provide a Python solution, edit solution.py
To provide a Java solution, edit solution.java

Test cases
==========

Inputs:
    (int) total_lambs = 10
Output:
    (int) 1

Inputs:
    (int) total_lambs = 143
Output:
    (int) 3

Use verify [file] to test your solution and see how it does. When you are finished editing your code, use submit [file] to submit your answer. If your solution passes the test cases, it will be removed from your home folder.


# Problem 2

Don't Get Volunteered!
======================

As a henchman on Commander Lambda's space station, you're expected to be resourceful, smart, and a quick thinker. It's not easy building a doomsday device and capturing bunnies at the same time, after all! In order to make sure that everyone working for her is sufficiently quick-witted, Commander Lambda has installed new flooring outside the henchman dormitories. It looks like a chessboard, and every morning and evening you have to solve a new movement puzzle in order to cross the floor. That would be fine if you got to be the rook or the queen, but instead, you have to be the knight. Worse, if you take too much time solving the puzzle, you get "volunteered" as a test subject for the LAMBCHOP doomsday device!

To help yourself get to and from your bunk every day, write a function called answer(src, dest) which takes in two parameters: the source square, on which you start, and the destination square, which is where you need to land to solve the puzzle.  The function should return an integer representing the smallest number of moves it will take for you to travel from the source square to the destination square using a chess knight's moves (that is, two squares in any direction immediately followed by one square perpendicular to that direction, or vice versa, in an "L" shape).  Both the source and destination squares will be an integer between 0 and 63, inclusive, and are numbered like the example chessboard below:

-------------------------
| 0| 1| 2| 3| 4| 5| 6| 7|
-------------------------
| 8| 9|10|11|12|13|14|15|
-------------------------
|16|17|18|19|20|21|22|23|
-------------------------
|24|25|26|27|28|29|30|31|
-------------------------
|32|33|34|35|36|37|38|39|
-------------------------
|40|41|42|43|44|45|46|47|
-------------------------
|48|49|50|51|52|53|54|55|
-------------------------
|56|57|58|59|60|61|62|63|
-------------------------

Languages
=========

To provide a Python solution, edit solution.py
To provide a Java solution, edit solution.java

Test cases
==========

Inputs:
    (int) src = 19
    (int) dest = 36
Output:
    (int) 1

Inputs:
    (int) src = 0
    (int) dest = 1
Output:
    (int) 3

Use verify [file] to test your solution and see how it does. When you are finished editing your code, use submit [file] to submit your answer. If your solution passes the test cases, it will be removed from your home folder.
