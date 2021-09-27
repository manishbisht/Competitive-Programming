# Problem #409 [Hard]

This problem was asked by Google.

PageRank is an algorithm used by Google to rank the importance of different websites. While there have been changes over the years, the central idea is to assign each site a score based on the importance of other pages that link to that page.

More mathematically, suppose there are N sites, and each site i has a certain count Ci of outgoing links. Then the score for a particular site Sj is defined as :

score(Sj) = (1 - d) / N + d \* (score(Sx) / Cx+ score(Sy) / Cy+ ... + score(Sz) / Cz))

Here, Sx, Sy, ..., Sz denote the scores of all the other sites that have outgoing links to Sj, and d is a damping factor, usually set to around 0.85, used to model the probability that a user will stop searching.

Given a directed graph of links between various websites, write a program that calculates each site's page rank.
