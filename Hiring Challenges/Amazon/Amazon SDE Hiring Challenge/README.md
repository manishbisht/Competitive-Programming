Samu and Shopping
Samu is in super market and in a mood to do a lot of shopping. She needs to buy shirts, pants and shoes for herself and her family. There are N different shops. Each shop contains all these three items but at different prices. Now Samu has a strategy that she won't buy the same item from the current shop if she had already bought that item from the shop adjacent to the current shop.

Now Samu is confused, because although she want to follow her strategy strictly but at the same time she want to minimize the total money she spends on shopping. Being a good programmer, she asks for your help.

You are provided description about all N shops i.e costs of all three items in each shop. You need to help Samu find minimum money that she needs to spend such that she buys exactly one item from every shop.

Input Format:
First line contain number of test cases T. Each test case in its first line contain N denoting the number of shops in Super Market. Then each of next N lines contains three space separated integers denoting cost of shirts, pants and shoes in that particular shop.

Output Format:
For each test case, output the minimum cost of shopping taking the mentioned conditions into account in a separate line.

Constraints :
1 ≤ T ≤ 10
1 ≤ N ≤ 105
Cost of each item (shirt/pant/shoe) does not exceed 104

Sample Input
1
3
1 50 50
50 50 50
1 50 50
Sample Output
52
Explanation
Sample Explanation

There are two ways, each one gives 52 as minimum cost. One way is buy shirt from first shop, pant from second shop and shirt from third shop or she can buy shirt from first shop, shoe from second shop and shirt from third shop. Both ways , cost comes up to 1 + 50 + 1 = 52

Note: Your code should be able to convert the sample input into the sample output. However, this is not enough to pass the challenge, because the code will be run on multiple test cases. Therefore, your code must solve this problem statement.
Moving to New Office
Ad-optimization team is moving to their new office Safina Towers :) . But the problem is Safina towers don't have furniture, but you have wood-sheet. You are given a wood-sheet of length L . Since everyone wants to create their desk in their own style you have to give them some amount of wood. So, you are given N mark-down points (since ad-optimization team have n members) from that points you have to cut the wood sheet. But the problem is wood-cutter will cost (Xleft) + (Y right) for cutting the wood (where left and right is the size of the remaining parts of the wood after cutting). For example you want to cut a wood sheet of length 10 and X=3 and Y=4 and you want to cut at point 7 then left segment size = (7-1) =6 and right segment size = (10-7) = 3 then wood cutter will cost 36+43 = 30$ .

As Amazonian you have to follow frugality leadership principal, you want to give wood cutter a minimum amount of money and want to cut wood-sheet from every marking point between 1 to L (exclusive ) . please note that in all the test case first mark point=1 and last mark point = size of sheet (L). Please output minimum amount of money needed for every test case.

Input Format: T: number of test cases (1<=T<=5) For each test case:

first line contains X and Y.(X: multiplier for left segment ,Y : multiplier for right segment) 2<=X<=100 2<=Y<=100

Second line Contains N: Number of marking points (2<=N<=100)

Third line contains marking point : m(0),m(1) ..... , m(n-1) marking points on wood sheet ,where m(0)=1 and m(n-1) = L where 2<=L<=200000

Output : For each test case : Minimum amount of money you have to pay to wood cutter. Each test case answer must be printed on a new line

Sample Input
1
3 4
6
1 3 5 9 16 22
Sample Output
163
Explanation
Explanation : Best Scenario: Frist cut at point 9 : cost = 3(9-1)+4(22-9) = 24 + 52 = 76 Second cut at point 5 : cost = 3(5-1)+ 4(9-5) = 12 + 16 = 28 Third cut at point 3 : cost = 3(3-1) + 4 (5-3) = 6+ 8 = 14 Fourth cut at point 16 : cost = 3(16-9) + 4(22-16) = 21+ 24 = 45 Total Cost : 163

Second Scenario : First cut at point 3 : cost = 3(3-1)+4(22-3) = 6+76 = 82 Second cut at point 9 : cost = 3(9-3)+4(22-9) = 18+52 = 70 Third cut at point 5 : cost = 3(5-3)+4(9-5) = 6+16 = 22 Fourth cut at point 16 : cost = 3(16-9)+4(22-16) = 21 + 24 = 45 Total Cost : 219

Note: Your code should be able to convert the sample input into the sample output. However, this is not enough to pass the challenge, because the code will be run on multiple test cases. Therefore, your code must solve this problem statement.
