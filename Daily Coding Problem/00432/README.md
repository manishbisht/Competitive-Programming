# Problem #432 [Hard]

This problem was asked by Google.

Design a system to crawl and copy all of Wikipedia using a distributed network of machines.

More specifically, suppose your server has access to a set of client machines. Your client machines can execute code you have written to access Wikipedia pages, download and parse their data, and write the results to a database.

Some questions you may want to consider as part of your solution are:

-   How will you reach as many pages as possible?
-   How can you keep track of pages that have already been visited?
-   How will you deal with your client machines being blacklisted?
-   How can you update your database when Wikipedia pages are added or updated?
